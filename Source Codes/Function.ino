
void zeroYaw() {
  Serial1.begin(115200);
  delay(100);
  // Sets data rate to 115200 bps
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X54);
  delay(100);
  // pitch correction roll angle
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X55);
  delay(100);
  // zero degree heading
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X52);
  delay(100);
  // automatic mode
}
bool getIMU() {
  while (Serial1.available()) {
    rxBuf[rxCnt] = Serial1.read();
    if (rxCnt == 0 && rxBuf[0] != 0xAA) return;
    rxCnt++;
    if (rxCnt == 8) {  // package is complete
      rxCnt = 0;
      if (rxBuf[0] == 0xAA && rxBuf[7] == 0x55) {  // data package is correct
        pvYaw = (int16_t)(rxBuf[1] << 8 | rxBuf[2]) / 100.f;
        // pvPitch = (int16_t)(rxBuf[3] << 8 | rxBuf[4]) / 100.f;
        // pvRoll = (int16_t)(rxBuf[5] << 8 | rxBuf[6]) / 100.f;
        pvYaw = wrapValue(pvYaw + compass_offset + min(max(mapf(getDistance(), 10, 25, 0, 1), 0), 1) * mapf(min(millis() - halt_detect_line_timer, 1000), 0, 1000, 25, 0) * (compass_offset >= 0 - 0.5) * 2, -179, 180);

        return true;
      }
    }
  }
  return false;
}

int wrapValue(int value, int minValue, int maxValue) {
  int range = maxValue - minValue + 1;
  if (value < minValue) {
    value += range * ((minValue - value) / range + 1);
  }
  return minValue + (value - minValue) % range;
}

float getDistance() {
  return min(mapf(analogRead(ULTRA_PIN), 0, 1023, 0, 500), 50);
}

// void motor(int speed) {
//   if (speed > 0) {
//     digitalWrite(E2Pin, LOW);
//   } else {
//     digitalWrite(M2Pin, HIGH);
//   }
//   analogWrite(E2Pin, map(abs(speed), 0, 100, 0, 255));
// }

void ultra_servo(int degree, char mode_steer) {
  int middle_degree = 0;
  if (mode_steer == 'F') {
    middle_degree = 270;
  } else if (mode_steer == 'R') {
    middle_degree = 360;
  } else if (mode_steer == 'L' || mode_steer == 'U') {
    middle_degree = 180;
  } else {
    // beep();
  }
  Servo_Value = ((max(min(middle_degree + degree, 360), 180)) / 2);
  myservo1.write(Servo_Value);
  // myservo1.write(mapf(max(min(middle_degree + degree, 225), 45), 0, 270, 0, 180));
}

void steering_servo(int degree) {
  myservo2.write(mapf(135 + max(min(degree, 35), -35), 0, 270, 0, 180));
}

void motor_and_steer(int degree) {
  degree = max(min(degree, 35), -35);
  steering_servo(degree);
  // motor(35);
  setMotorSpeed(M1, map(abs(degree), 0, 45, 80, 100));
}

// void beep() {
//   digitalWrite(BUZZER, HIGH);
//   delay(100);
//   digitalWrite(BUZZER, LOW);
// }

void line_detection() {
  int GEEN_value = analogRead(GEEN_SEN);
  int red_value = analogRead(RED_SEN);

  if (TURN == 'U') {
    if (GEEN_value < 600 || red_value < 600) {
      int lowest_red_sen = red_value;
      long timer_line = millis();
      while (millis() - timer_line < 100) {
        int red_value = analogRead(RED_SEN);
        if (red_value < lowest_red_sen) {
          lowest_red_sen = red_value;
        }
      }
      if (lowest_red_sen > 600) {
        // Red
        TURN = 'L';
        compass_offset += 90;
        x = 1;
        Y = 17;
        // beep();
      } else {
        // Blue
        TURN = 'R';
        compass_offset -= 90;
        x = -1;
        Y = 25;
      }
      count++;
      halt_detect_line_timer = millis();
    }
  } else {
    if (millis() - halt_detect_line_timer > 800) {
      if (GEEN_value < 600 || red_value < 600) {
        if (TURN == 'R') {
          compass_offset -= 90;
        } else {
          compass_offset += 90;
        }
        halt_detect_line_timer = millis();
        count++;
      }
    }
  }
}

void initMotor() {
  int i;
  for (i = 0; i < MotorNum; i++) {
    digitalWrite(MotorPin[i].enPin, LOW);

    pinMode(MotorPin[i].enPin, OUTPUT);
    pinMode(MotorPin[i].directionPin, OUTPUT);
  }
}

/**  motorNumber: M1, M2
direction:          Forward, Backward **/
void setMotorDirection(int motorNumber, int direction) {
  digitalWrite(MotorPin[motorNumber].directionPin, direction);
}

/** speed:  0-100   * */
inline void setMotorSpeed(int motorNumber, int speed) {
  analogWrite(MotorPin[motorNumber].enPin, 255.0 * (speed / 100.0));  //PWM
}

void check_leds() {
  while (true) {
    Serial.print("Geen: ");
    Serial.print(analogRead(GEEN_SEN));
    Serial.print("   Red: ");
    Serial.println(analogRead(RED_SEN));
    line_detection();
  }
}

void check_BUTTON() {
  while (true) {
    Serial.print("Button: ");
    Serial.println(analogRead(BUTTON));
  }
}

// float calculate_avoidance() {
//   int blocks = pixy.ccc.getBlocks();


//     found_block = false;

//   if (blocks) {
//     int signature = -1;       // Signature of the object you want to detect
//     int targetHeight = 10;    // Height of the object in centimeters
//     float focalLength = 2.3;  // Focal length of the camera in centimeters
//     float cameraFOV = 80.0;   // Field of view of the camera in degrees

//     int largestBlockIndex = -1;
//     int largestBlockArea = 0;

//     for (int i = 0; i < blocks; i++) {
//       if (pixy.ccc.blocks[i].m_height > 1.33 * float(pixy.ccc.blocks[i].m_width)) {
//       int objectArea = pixy.ccc.blocks[i].m_width * pixy.ccc.blocks[i].m_height;
//       found_block = true;
//       if (objectArea > largestBlockArea) {
//         largestBlockIndex = i;
//         largestBlockArea = objectArea;
//         signature = pixy.ccc.blocks[i].m_signature;
//         }
//       }
//     }

//     if (signature != -1) {
//       int objectHeight = pixy.ccc.blocks[largestBlockIndex].m_height;
//       float distance = (targetHeight * focalLength * 100) / objectHeight;

//       float blockCenterX = pixy.ccc.blocks[largestBlockIndex].m_x;
//       float blockCenterY = pixy.ccc.blocks[largestBlockIndex].m_y;

//       float deltaX = blockCenterX - pixy.frameWidth / 2;
//       float deltaY = blockCenterY - pixy.frameHeight / 2;

//       float detected_degree = deltaX * 40 / pixy.frameWidth;

//       float blockPositionX = distance * sin(degreesToRadians(detected_degree));
//       float blockPositionY = distance * cos(degreesToRadians(detected_degree)) - 17;

//       if (signature == 1) {
//         avoidance_degree = max(radiansToDegree(atan2(blockPositionX + 9, blockPositionY)), 5);
//         Blocks_TURN = 'R';
//       } else {
//         avoidance_degree = min(radiansToDegree(atan2(blockPositionX - 9, blockPositionY)), -5);
//         Blocks_TURN = 'L';
//       }


//       // Serial.print("Detected degree: ");
//       // Serial.print(detected_degree);
//       // Serial.println(" degree ");
//       // Serial.print("Position (X, Y): ");
//       // Serial.print(blockPositionX);
//       // Serial.print(", ");
//       // Serial.print(blockPositionY);
//       // Serial.print(" cm   Degree rotate: ");
//       // Serial.println(avoidance_degree);
//     }
//   }

//   return avoidance_degree;
// }

// float degreesToRadians(double degrees) {
//   return degrees * PI / 180.0;
// }

// float radiansToDegree(double raidans) {
//   return raidans / PI * 180.0;
// }