The project uses a cheap RGB chinese led driver. How is implemented is detailed in [this post](https://perso.aquilenet.fr/~sven337/english/2015/01/19/Tearing-down-a-RGB-LED-strip-amplifier.html). It's a work in progress to implement a similar cirtcuit in a just one board.

In the squematics the driver is not specifed (could not find the part). So the conexion is (a part from the specified in fritzing):
1. 12V DC power to the driver's power terminals.
2. Microcontroller P0 to the G input chanel of the diver.
3. LED strip + to driver's +OUT, - to G-OUT.

> Note the grounds have to be common for the driver and the microcontroller.

That's all!
