ABSTRACT:This paper describes the robots which are configured in master slave technology. Industries need many
workers for doing the same work at the same time and few supervisors are needed to keep a watch on them.Hence
manpower is wasted. Therefore, we have come out with a solution i.e. “Master-Slave Configuration Based Bluetooth
Controlled Robots”. In this, the user sends the data from the phone or tablet which is received and executed by the
master robot and simultaneously this data is broadcasted to the slave robots through the RF transmitter. Slave robots
receive the data from theRF receiver, decode it, send the command to motor driver circuit and from then to the
motor.The transmission and reception takes place at 433MHz frequency.Also, there is aprovisionthatanyof the 3 robots
can be madethemasterof the remaining 2 robots.
KEYWORDS: Master Slave, Robot, RF transmitter,RF receiver, Motor Driver, Motor.
I.INTRODUCTION
Some problems of a complex system are internal, whereas other problems exist peripherally. Externally, there
may be limitations in a system regarding the expandability or the connectivity of the system. Looking at the current
scenario in the manufacturing industry, there are systems wherein each individual manufacturing unit is programmed
separately with same commands and same execution is expected. In such a system, the cost of programmable devices is
a major drawback. Other types of system requires wires forconnection amongst all machines so that they can
communicate and execute the given instructions. In these systems, wires are an avoidable expenditure.
To summarize, we can say that:
1) Multiple control devices are required for multiple working devices executing the same job. This leads to the wastage
of resources, time, workforce and it also hinders the coordination between the devices with similar applications.
2) The wired connections between multiple control and controlled devices lead to the complexities[2]
.
Taking these points into consideration and to increase the simplicity of the system, we have provided an
application based solution through our project demonstration named ‘Imitating Bots’. This is a fool proof solution to
these problems and has proven to be much better.This system implicates the Master-Slave model of devices [2]. In this
system, there will be a controller device (a master device) which will control the other devices(slaves) while executing
the instructions received from an android device(remote) and number of slave devices who will follow the master.
In this application, we are using an Android based mobile phone as a controller. The commands given by the
master doesn’t fall into any limitations or restrictions which abide the slave to perform the action mentioned in the form
of an instruction/command which is transmitted by the master. Thus, only themasteris neededto be controlledand then,
mater will take the load to control the slaves. Then, the slaves will perform the same task in real time as that of the
master.
 
A new type of master-slave control methodology, which has the merits of both unilateral and bilateral ones, is
proposed. A master-slave control system and method of operation wherein the master element has substantially
absolute invasive control over functions and capabilities of slave elements which are linked in with the network and
wherein the master element can exercise latent control over slave elements. One robot is having unidirectional control
over twoother robots. Master robot establishes its control over slaves using RF communication links. The commands to
be executed are modulated at master robot using Amplitude Shift Keying (ASK) [2]. A four bit command is encoded by
the master robot which later is decoded by each slave robot. Motors connected to each robot react according to the
inputs given to their H-bridge driver circuits. 
2) EXPLAINATION OF MASTER:
Power supply [6] is given to the Arduino [3], the Bluetooth module, the RF module [5]and the motor driver. The
remote used here is anandroid mobile phone. The mobile phone is here to give commands to the master. We are using
Android software Blue-Control as the remote. The mobile phone is connected to Arduino via Bluetooth module. The
Bluetooth module is used because of the security and better communication mediumit provides. Bluetooth requires
pairing and hence it is controllable by the person who is desired to control it. With the help mobile phone the Master
Robot will be assigned with certain tasks. These instructions given through mobile phone will be executed by the
Master Robot. Further, after execution, the same commands will be send to the Slave Robot. The data from Arduino is
given to the motor driver. The motor driver drives the motor [1] accordingly. Inverted commands are given to
HT12Eencoder [4]. This IC converts the parallel data from Arduino into serial data. This serial data is then given to RF
transmitter. The RF transmitter transmits the data into free space using ASK modulation [2]
.
3) EXPLAINATION OF SLAVE:
Power supply is given to the RF Receiver module and the motor driver. The RF Receiver module receives the
commands from the master. The data is then given to HT12D [4] which converts the serial data input into 4-bit parallel
data. The parallel data is inverted using a not gate. The motor driver receives the commands from the not gate IC and
then the motor is driven accordingly. The main advantage here is that there is no controller used in the circuit. This reduces the cost and complexity of the overall circuit. Also, multiple circuits with identical circuitry can act as slaves
without any changes made in the master

IV. CONCLUSION
The execution of the master and all the slaves is at the same time, hence they are100% synchronous. The slave
bots execute the commands at the same time as that of the master hence the slave and the master bots both are 
synchronous. Due to this, the task can be done effectively and accurately as lag will not be introduced in the
system.Use of Bluetooth also brings security to the whole system.



REFERENCES
[1] B. L. Thareja& A. K. Thareja, “Electrical Technology”, vol. 2
[2] Wayne Tomasi, “Electronic Communication System”
[3] https://arduino.cc
[4] http://robokits.co.in/wirelesssolutions/ht12e-ht12d-encoder-and-decoder-ic-for-rf-modules
[5] https://www.engineersgarage.com/electronic-components/rf-module-transmitter-receiver
