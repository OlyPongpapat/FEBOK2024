### ***WE ARE TEAM YBR-BOK***

<p align="center">
  <img src="https://ybrobot.club/image/YB%20Robot%20logo.png" width="300"/>
</p>
<p align="center">
 by Yothinburana School

# **About Us.**

### **This is our team.**


  We are team YBR-BOK. We are a team from Yothinburana School in Bangkok, Thailand. Our team is comprised of 3 members; Pawit Nateenantasawasd, Pongpapat Putongkam, and Thanyawut Krittikanon.
For the past 4 years, we have been good friends, classmates, and teammates. Last year, our first time competing in this WRO category, we got lucky and had a chance to compete in the international round. But we are not careful enough, our rookie mistake gets us only in 8th place. This year we hope to get one more chance before the regulations change to redeem ourselves.

<p align="center">
    <img src="https://github.com/user-attachments/assets/0cc32271-a7d0-4db4-8669-6ef6ca3a210b"/>
</p>

Programmer: Pawit Nateenantasawasd </p>
Mechanic: Pongpapat Putongkam </p>
Support: Thanyawut Krittikanon </p>

</p>

  Our team has 3 major positions. Firstly, Pawit Nateenantasawasd (the middle person). He is the programmer of our team. He is quite introverted so he can focus for a very long time. On the other hand, Pongpapat Putongkam (the left person). He has a very short attention span, so he could come up with new ideas easily. He is the designer and builder of our robot. Lastly, Thanyawut Krittikanon (the right person). He is at the best of both worlds. He can program and design, so he is a supporter of the team. Our team name is YBR-BOK. 'YBR' stands for 'Yothinburana Robot Club', and 'BOK' comes from our nickname 'Book, O'ly, Kaopun'.

# Content
`3DModels` This folder includes the 3D design of the vehicle and the rendered model of the vehicle.

`Schemes` This folder contains one or more schematic diagrams in JPEG, PNG, or PDF format that depict the electromechanical components of the vehicle. These diagrams illustrate all the elements, including electronic components and motors, and show how they are interconnected.

`Source Codes` This folder includes all programming used to participate in the WRO 2024 Future Engineers Category and all the programming flowcharts.

`Team Photos` This folder includes photos of the team participating in the WRO 2024 Future Engineers Category.

`Vehicle Photos` This folder contains photos of the vehicle from all perspectives, including side and bottom views.

`video` This folder contains YouTube links that show how the robot operates to complete both missions.

# **Part 1: ROBOT DESIGN**

Last year, our design was based entirely on Lego. This year we decided to up our game and 3d print the whole thing with ABS and PLA plastic filament reinforced with metal parts and some Lego. Using 3d printed parts allows more flexibility to be implemented and makes it easy to acquire spare parts for an emergency.
Even with all of that, we will still use Lego parts to connect in a very precise area.



## **Parts of our ROBOT**

<br>

- **Board** - Arduino Mega 2560 REV3

<img src="https://github.com/user-attachments/assets/818da67a-a471-4aec-b4ee-9db775fbeeff" width="400"/><br>
<br>
| Specification        | Description                  |
|----------------------|------------------------|
| Microcontroller |	ATmega2560 |
| Operating | Voltage	5V |
| Input Voltage (recommended)|	7-12V |
| Input Voltage (limit) |	6-20V |
| Digital I/O Pins |	54 (of which 15 provide PWM output) |
| Analog Input | Pins	16 |
| DC Current per I/O Pin |	20 mA |
| DC Current for 3.3V | Pin	50 mA |
| Flash Memory |	256 KB of which 8 KB used by bootloader |
| SRAM	| 8 KB |
| EEPROM	| 4 KB |
| Clock Speed |	16 MHz |
| LED_BUILTIN |	13 |
| Dimensions           | 101.5mm x 53.3mm       |

It's a popular microcontroller board based on the ATmega2560 processor, featuring a large number of digital and analog I/O pins, making it suitable for complex projects that require a lot of inputs and outputs like Future Engineer. Having a lot of ports get rid of the problem that we do not have enough ports to connect 'OpenMV camera' while using 'Gyro'. This is why we trust and select Arduino Mega 2560 REV3.

<br>

- **Sensor Shield** - IO Sensor Shield Due (By DF ROBOT)

<img src="https://dfimg.dfrobot.com/data/DFR0165/20140710/_DSC0295.jpg" width="400"/><img src="https://github.com/ThanyawutII/Test/blob/main/Screenshot%202024-08-19%20233633.png" width="570"/><br>
<br>
| Specification        | Description                  |
|----------------------|------------------------|
| Xbee slots      | 3 slots     |
| MicroSD slot          | 1 slots                 |
| Power selector | To select between Arduino Mega power or external power                 |
| Extended TTL connection pins          | for 4 Serial ports                   |
| support               | most of the arduino shield               |
| Dimensions           | 125 x 57 mm            |

This extra-large shield features three Xbee slots, a microSD slot, and Arduino shield headers compatible with most Arduino shields. It also includes a prototyping area and provides breakouts for Digital pins 14 to 53, Analog pins 6 to 15, and PWM pins 2 to 9. With these capabilities, this shield can serve as a key communication hub for your projects.

<br>

- **Motor Driver Shield** - IO Expansion Shield V7.1 (By DF ROBOT)

<img src="https://github.com/user-attachments/assets/454be0c1-7d74-458e-b82a-f914ec6e9acd" width="400"/><br>
<br>
| Specification        | Description                  |
|----------------------|------------------------|
| Ports      | 3Pins     |
| Digital Pins          | 14 Pins                |
| Analog Pins | 6 Pins                 |
| The external 5.5V power supply provides 3.3V    | Regulated power supply and is compatible with 3.3V components                   |

It supports both 3.3V and 5V voltages, includes a switch for wireless communication or programming, and features clear, color-coded headers. Key highlights include 14 digital pins (6 with PWM), 6 analog pins, multiple communication interfaces (Xbee, Bluetooth, Wi-Fi), and extended ports for easy module connections. Designed for flexibility, it also supports external power for longer battery life and is compatible with various wireless modules and I2C interfaces.

<br>

- **Driving Motor** ( Power Functions L-Motor )

<img src="https://technicbriks.com/wp-content/uploads/alternative-lego-l-motor-lite-1.png"  width="250"/>  <img src="https://github.com/OlyPongpapat/Future-Engineer-Zenith/assets/146799155/b6fe03de-5aed-4876-8065-6b62df5169cd" width="250"/><br>
<br>
| Specification        | Description                  |
|----------------------|------------------------|
| Category             | Electric Motor             |
| Subcategory          | Power Functions             |
| Theme                | Technic™               |
| Brand                | LEGO                   |
| Color                | Light Bluish Gray      |
| Released in          | 2012                   |
| Weight               | 45 grams               |
| Dimensions (LxWxH)  | 5.6 x 2.5 x 3 cm       |

The LEGO Power Functions L-Motor (88003) is favored for its compact size, quiet operation, and energy efficiency, making it ideal for integrating into intricate LEGO builds without noise concerns. Its cost-effectiveness and reliable performance further enhance its appeal, providing a balanced option for powering a variety of LEGO creations effectively. The motor comes with a dedicated port for Lego. So, we modified it to make it able to connect to the board.

<br>

- **Camera** - OpenMV

<img src="http://cdn.shopify.com/s/files/1/0803/9211/products/web-new-cam-v3-angle_grande.jpg?v=1480645085" width="400"/><br>

| Specification        | Description                  |
|----------------------|------------------------|
| Processor             | ARM® 32-bit Cortex®-M7 CPU w/ Double Precision FPU, 480 MHz (1027 DMIPS), Core Mark Score: 2400 (compare w/ Raspberry Pi 2: 2340), and RAM Layout (33MB Total)|
| RAM Layout (33MB Total)          | 256KB .DATA/.BSS/Heap/Stack, 32MB Frame Buffer/Stack, 512KB SDRAM Cache, 256KB DMA Buffers, and Flash Layout (34MB Total):             |
| Flash Layout (34MB Total)                | 128KB Bootloader, 32MB Embedded Flash Drive, 1792KB Firmware, and Supported Image Formats               |
| Supported Image Formats                | Grayscale, RGB565, JPEG (and BAYER/YUV422), and Maximum Supported Resolutions                   |
| Maximum Supported Resolutions                | Grayscale: 2952x1944 (5MP) and under, RGB565: 2952x1944 (5MP) and under, Grayscale JPEG: 2952x1944 (5MP) and under, and RGB565 JPEG: 2952x1944 (5MP) and under      |
| Lens Info                | Focal Length: 2.8mm, Aperture: F2.0, Format: 1/3", HFOV = 70.8°, VFOV = 55.6°, Mount: M12*0.5, and IR Cut Filter: 650nm (removable)      |

<br>

We decided to use this camera instead of the Pixy2.1 due to its excellent visual performance, which allows it to accurately distinguish objects and colors.Additionally, we use this camera to measure the XYZ axes, calculate the center of objects, and further enhance color differentiation accuracy.

<br>

- **Camera Shield** ( LCD Shield Rev 2 ) 

<img src="https://wiki.amperka.ru/_media/products:openmv-lcd-shield:openmv-lcd-shield-install.2.jpg" width="250"/> <img src="http://imgmgr.banggood.com/images/oaupload/banggood/images/EC/B8/d7fdd717-16ac-4de0-b126-f83d9fcf89c4.JPG" width="287"/><br>

| Specification        | Description                  |
|----------------------|------------------------|
| Screen Type             | 1.8" TFT LCD             |
| Horizontal Resolution          | 128 pixels (28.03mm) 0.18mm pixel pitch             |
| Vertical Resolution                | 160 pixels (35.04mm) 0.18mm pixel pitch               |
| Brand                | LEGO                   |
| Display Colors                | 64K 16-bit RGB565      |


<br>

We added this component so that when we test the robot without connecting it to the computer, we can still identify any errors that occur.

<br>

- **Servo** ( GEEKSERVO-360 ) one for **steering** our robot and another for rotating **the ultrasonic sensor**

<img src="https://thepihut.com/cdn/shop/products/geekservo-building-brick-180-rotation-block-servo-geekservo-104134-28717055836355_1500x.jpg?v=1646531299" width="400"/><br>
<br>
| Specification          | Description            |
|------------------------|------------------------|
| Temperature Range      | -20 ℃ to 60 ℃         |
| Operating Temperature  | -10 ℃ to 50 ℃         |
| Electrical Voltage     | 4.8V ~ 6V (Servo) / 3V (Motor) |


We use the Geekservo 2kg 360 Degrees for steering the robot and an Ultrasonic Sensor for rotation. This servo is compatible with LEGO, simplifying and streamlining the robot's construction.

<br>

- **Ultrasonic Sensor** ( SEN0307 ) to measure the distance between the robot and the walls

<img src="https://dfimg.dfrobot.com/store/data/SEN0307/SEN0307.jpg?imageView2/1/w/564/h/376" width="400"/><br>
<br>
| Specification          | Description            |
|------------------------|------------------------|
| Supply voltage         | 3.3 V to 5.5 V         |
| Power consumption      | 20 mA                  |
| Measurement range     | from 2 cm to 500 cm    |
| Resolution             | 1 cm                   |
| Accuracy               | 1%                     |
| Frequency              | max. 30 Hz             |
| Operating temperature  | -10°C to 70°C          |
| Dimensions             | 47 x 22 mm             |
| Distance calculation   | Distance = Vout (mV) x 520 / Vin (mV) |

An impressive sensor with **built-in temperature compensation**, which minimizes measurement errors due to extreme temperatures. It utilizes **analog voltage output** and offers precise distance measurements ranging from **2 to 500 cm** with a 1 cm resolution and **±1% accuracy**.

<br>

- **Color Sensor** - We use the Virus-III designed by Sopon and the ZX-03 designed by INEX to detect the field's colors. The red ZX-03 Reflector is used to detect the blue line, while the green Virus-III is used to detect the red line, allowing us to accurately measure color values on the field.

<img src="https://inex.co.th/home/wp-content/uploads/2020/07/zx_03_tcrt.jpg" width="400"/><img src="https://github.com/ThanyawutII/Test/blob/main/Picture2.jpg" width="285"/>

<br>

- **Gyro** - We use **GY-25** gyro to control the direction of our robot.

<img src="https://inwfile.com/s-o/q6moq1.jpg" width="300"/><br>

| Specification            | Description                        |
|--------------------------|------------------------------------|
| Chip                     | MPU-6050                            |
| Electrical Voltage       | 3 - 5V                             |
| Communication Modes      | Serial Communication (9600, 115200 Baud), I2C Communication  |
| Dimensions               | 15.5mm x 11.5mm                   |
| Pin Spacing              | 2.54mm                             |
| Direct Data Output       | Raw Data                           |
| Pitch Angle (Yaw)       | ± 180°                            |
| Roll Angle (Roll)       | ± 180°                            |
| Yaw Angle (Pitch)       | ± 180°                            |
| Angular Resolution      | 0.01°                             |


Dataset: http://mkpochtoi.ru/GY25_MANUAL_EN.pdf<br>
Library: https://github.com/ElectronicCats/mpu6050

<br>

- **Step Down** - We use a **Step Down** converter to display the battery voltage and regulate the power to the desired level.
<img src="https://gd.lnwfile.com/_/gd/_raw/eb/vw/s0.jpg" width="300"/><br>
<br>

| Specification              | Description              |
|----------------------------|--------------------------|
| Input Voltage              | 4-38 VDC                 |
| Output Voltage             | 1.25-36 VDC              |
| Output Current Maximum     | 5A                       |
| Chipset                    | XL4015E1                 |
| Dimension         | 39mm x 66mm x 18mm (WxLxH) |

<br>

- **ZX-Switch01** - We use the **ZX-Switch01** to facilitate the program's initiation.

<img src="https://inex.co.th/home/wp-content/uploads/2020/07/zx-switch01.jpg" width="300"/><br>

Additional Details:<br>
When the switch is pressed, the DATA pin will be at a logic "1" due to R2, which is connected as a pull-up resistor. Pressing the switch will pull the DATA pin to "0" by creating a short circuit to ground. This causes current to flow through the LED and R1, making the LED light up brightly. Additionally, the DATA pin can also function as an input, allowing you to control the LED's on and off state as needed.

<br>

- **Power Switch** - We use this switch designed by us to turn the power supplied to the robor on and off.

<img src="https://github.com/ThanyawutII/Test/blob/main/51558.jpg" width="300"/><br>


# **Part 2 : Programming**
 
##📢 Setting up your Board and Arduino Software 
<br>
❗ Please Note that** ❗> We are using the **Arduino Mega 2560 REV3**. If you choose to replicate our project with a different board, you may need to make some adjustments to the code provided in this repository.

<be>

  '''c
  #include "Mapf.h"
  #include "Servo.h"
  #include <PID_v2.h>
  
  Servo myservo1;
  Servo myservo2;
  
  '''

At the top of the program. We're setting up our code for controlling two servos, myservo1 and myservo2, along with using a PID controller.

'''c
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];
'''

pvYaw, pvRoll, pvPitch: These are floating-point variables meant to store the yaw, roll, and pitch values from the compass sensor or the IMU . These values represent the orientation of our robot.

'''c
const int E1Pin = 10;
const int M1Pin = 12;
'''

E1Pin and E2Pin: Control the speed (enable pins) of the motors.

'''c
typedef struct {
  byte enPin;
  byte directionPin;
} MotorContrl;
'''

A structure that groups together the enable pin (enPin) and the direction pin . This structure makes it easier to manage motor control in the code.

'''c
const int M1 = 0;
const int MotorNum = 1;
'''

M1 represents the index for the first motor in the MotorPin array.
MotorNum indicates the total number of motors, set to 1 

const MotorContrl MotorPin[] = { {E1Pin, M1Pin}, {E2Pin, M2Pin} };

MotorPin[]: An array of Motor Control structures that holds the pin configurations for two motors.
The first motor uses E1Pin and M1Pin.
The second motor uses E2Pin and M2Pin.

int const STEER_SRV = 23;
int const ULTRA_SRV = 16;

STEER_SRV: Pin 23 is used to control the steering servo.
ULTRA_SRV: Pin 16 is used to control the servo connected to the ultrasonic sensor.

int const ULTRA_PIN = A9;

ULTRA_PIN: Pin A9 is connected to the ultrasonic sensor, used for distance measurements.

int const RED_SEN = A6;
int const GEEN_SEN = A7;

RED_SEN: Pin A6 is connected to the red light sensor.
GEEN_SEN: Pin A7 is connected to the green light sensor.

int const BUTTON = A8;
BUTTON: Pin A8 is connected to a button, used for user input or starting/stopping the robot.
