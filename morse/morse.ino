#include<Morse.h>
Morse morse= Morse(13);
char palabra;
void setup(){
    Serial.begin(9600);
}


void loop(){
    palabra= Serial.read();
    morse.letras(palabra);
  
  
}
