


void allumer(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10)
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);

  delay (2000);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,LOW);
  digitalWrite(pin9,LOW);
  digitalWrite(pin10,LOW);


  
  
}

void eteindre(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10)
{
  
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);

  delay(2000);
  
}

void LedSur2_1(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10)
{
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin8,HIGH);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9,HIGH);
  digitalWrite(pin10, LOW);

  delay(2000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  
}

void LedSur2_2(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10)
{
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH );
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH );
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH );
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,HIGH);
  digitalWrite(pin8,LOW );
  digitalWrite(pin9,HIGH);
  digitalWrite(pin10,LOW);

  delay(2000);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,LOW);
  digitalWrite(pin8,LOW);
  digitalWrite(pin9,LOW);
  digitalWrite(pin10,LOW);
}

void chenille(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10)
{
  digitalWrite(pin1,HIGH);
  delay(500);
  digitalWrite(pin1,LOW);
  delay(500);
  digitalWrite(pin2, HIGH);
  delay(500);
  digitalWrite(pin2, LOW);
  delay(500);
  digitalWrite(pin3, HIGH);
  delay(500);
  digitalWrite(pin3, LOW);
  delay(500);
  digitalWrite(pin4, HIGH);
  delay(500);
  digitalWrite(pin4, LOW);
  delay(500);
  digitalWrite(pin5, HIGH);
  delay(500);
  digitalWrite(pin5, LOW);
  delay(500);
  digitalWrite(pin6, HIGH);
  delay(500);
  digitalWrite(pin6, LOW);
  delay(500);
  digitalWrite(pin7, HIGH);
  delay(500);
  digitalWrite(pin7, LOW);
  delay(500);
  digitalWrite(pin8, HIGH);
  delay(500);
  digitalWrite(pin8, LOW);
  delay(500);
  digitalWrite(pin9, HIGH);
  delay(500);
  digitalWrite(pin9, LOW);
  delay(500);
  digitalWrite(pin10, HIGH);
  delay(500);
  digitalWrite(pin10, LOW);

  delay (2000);
}


