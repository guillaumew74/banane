#include "param.h"

int pin1=1;
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
int pin9=9;
int pin10=10;

void setup() //initialisation de l'arduino

{
  // pinMode(Ledpin, OUTPUT) $
  pinMode(pin1,OUTPUT); 
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
  pinMode(pin9,OUTPUT);
  pinMode(pin10,OUTPUT);

  Serial.begin(9600);  
}


void loop() {
  // put your main code here, to run repeatedly:
  
allumer ( pin1,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10);
delay(2000);
 eteindre ( pin1,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10);
delay(2000);
 LedSur2_1( pin1,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10);
delay(2000);
 LedSur2_2( pin1,  pin2, pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10);
delay(2000);
 chenille( pin1,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10);
delay(2000);
}
