# MASTER AND SLAVE BOT
## INTRODUCTION
I2C (Inter-Integrated Circuit) is serial bus interface connection protocol. It is also called as TWI (two wire interface) since it uses only two wires for communication. Those two wires are SDA (serial data) and SCL (serial clock).

I2C is an acknowledgment-based communication protocol i.e. transmitter checks for an acknowledgment from the receiver after transmitting data to know whether data is received by receiver successfully.

I2Cworks in two modes namely,

Master mode
Slave mode
SDA (serial data) wire is used for data exchange in between the master and slave device.

SCL (serial clock) is used for the synchronous clock in between master and slave device.

Master device initiates communication with a slave device. It requires a slave device’s address to initiate conversation. The slave device responds to a master device when it is addressed by a master device.

The I2C device has 7-bit or 10-bit unique address. So, to access these devices, a master must address them by the 7-bit or 10-bit unique address.

I2C is used in many applications like reading RTC (Real-time clock), accessing external EEPROM memory. It is also used in sensor modules like a gyro, magnetometer etc.

I2C protocol uses 2 lines for communication:

Serial Clock (SCL): It is a clock signal. Data will be sent to other devices on clock tick event. Only master device has control over this SCL line.
Serial Data (SDA): It is a serial data line which is used for exchanging data between master and slave device
I2C bus is an open drain configuration which means they can pull the corresponding signal line low but cannot drive it high. Hence the line will go in to unknown state. In order to avoid this, pull up resistors need to be connected on SCL and SDA pins.
![](https://www.electronicwings.com/public/images/user_images/images/Arduino/Arduino_basics/Arduino_I2C/I2C_Generalized.PNG)
![](https://www.electronicwings.com/public/images/user_images/images/Arduino/Arduino_basics/Arduino_I2C/Arduino_i2c_pins.png)

REFRENCE:-https://www.electronicwings.com/arduino/arduino-i2c
