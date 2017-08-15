# Arduino

Comunicación entre Arduino y raspberry por medio de I2C

I2C es un protocolo que permite la comunicación entre dispositivos mediante dos hilos, el primero transporta la información y el segundo sirve como reloj. Este protocolo se define según una arquitectura maestro-esclavo donde un único maestro podrá comunicarse con cualquier esclavo y donde los esclavos se comunicarán con el maestro siempre que éste lo ordene explícitamente a uno de ellos.

El material usado para este proyecto es el siguiente:

*Raspberry

*Arduino Uno

*Led

*Resistencia 330 ohms

*pulsador o botón

*Jumpers 

## Paso 1

El primer paso será instalar Windows 10 iot core en nuestra raspberry es el sistema operativo diseñado para crear soluciones iot compatible desde la raspberry 2, 3 hasta las Minnowboard Max


Ahora pasamos con la aplicacion de Ardino, creamos un proyecto nuevo

y lo primero que necesitaremos sera agregar la libreria Wire que esta incluida por defalut en el IDE por lo tanto solo tendremos que escribir lo siguiente.

#include<Wire.h>


despues la de visual studio