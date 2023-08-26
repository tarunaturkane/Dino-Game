#include<Servo.h>
Servo s1;


void setup()
{
  s1.attach(3);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A2,INPUT);
}

void loop()
{
  while(analogRead(A4)<800)
  {
    while(analogRead(A3)<300 && analogRead(A2)<750)
    {
      s1.write(0); 
      if(analogRead(A4)>800)
      {
        break;
      } 
    }


    if(analogRead(A4)>800)
    {
      break;
    } 
  
    s1.write(42);
    delay(200);
    s1.write(0);
    delay(200);
    while(analogRead(A3)>300 || analogRead(A2)>750)
    { 
      s1.write(0);  
      if(analogRead(A4)>800)
      {
        break;
      }   
    }

    if(analogRead(A4)>800)
      {
        break;
      } 
  }

  while(analogRead(A4)>800){
    while(analogRead(A3)>505 && analogRead(A2)>865)
    {
      s1.write(0);  
      if(analogRead(A4)<800)
      {
        break;
      } 
    }
    if(analogRead(A4)<800)
    {
      break;
    } 
    s1.write(42);
    delay(200);
    s1.write(0);
    delay(200);
    while(analogRead(A3)<505 || analogRead(A2)<865)
    {
      s1.write(0); 
      if(analogRead(A4)<800)
      {
        break;
      }   
    }
    if(analogRead(A4)<800)
      {
        break;
      } 
  }
  
}