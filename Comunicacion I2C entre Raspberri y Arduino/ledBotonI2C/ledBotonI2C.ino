#include <Wire.h>


const int LED =13;
const int BOTON = 7;
const char* informationArray;
String finalString;

int val = 0; //val se emplea para almacenar el estado del boton
int state = 0; // 0 LED apagado, mientras que 1 encendido
int old_val = 0; // almacena el antiguo valor de val

void setup()
{
  Serial.begin(9600);
  Wire.begin(0x40);
  // definir si la variable es de entrada // o salida.
  pinMode(LED,OUTPUT); // establecer que el pin digital es una señal de salida
  pinMode(BOTON,INPUT); // y BOTON como señal de entrada
}

void loop() 
{
  // loop = realice un lazo continuamente
  val= digitalRead(BOTON); // lee el estado del Boton
  if ((val == HIGH) && (old_val == LOW))
  {
   state=1-state;
   delay(10);
  }
  
  old_val = val; // valor del antiguo estado
  if (state==1)
  {
    digitalWrite(LED, HIGH); // enciende el LED
  }
  else
  {
    digitalWrite(LED,LOW); // apagar el LED
  }
  Serial.println(state);

  finalString = state;
  informationArray = finalString.c_str();
  Wire.onRequest(SendData);
  delay(1000);
}

void SendData()
{
  Wire.write(informationArray);   
}
