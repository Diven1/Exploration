# # # WORKING: 
Instead of one Arduino with a dozen or so sensors and components attached to it, we can have five Arduinos each supporting one or two sensors. The sensors data is then sent to the master Arduino unit to do integration calculation and I/O.

By pairing key components with a microcontroller and programming it to send data via 12C to a central microcontroller.

Each of the 12C networked component has enough processing power dedicated to it. When it's ready, it sends it's data to my central Arduino using only 2 wires, one for data and the other for timing.

Better yet, these components can be hot-swapped. 12C specifications make it possible to plug and unplug 12C nodes into the bus while it's running.

![image](https://user-images.githubusercontent.com/105147415/168518351-b2f76411-4544-4c49-9b23-f912a805ec35.png)
![](https://www.denso-wave.com/imageupd/21002/24748_contents4.jpg)