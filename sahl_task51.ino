char Reading ;

void setup()
{
  pinMode(1 ,OUTPUT);
  pinMode(2 ,OUTPUT);
  pinMode(3 ,OUTPUT);
  pinMode(4 ,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
  Reading = Serial.read();
    
    switch(Reading)
    {
     case 'f' : 
      digitalWrite(1,1);
      digitalWrite(2,1);
      break;
     case 'b' :
      digitalWrite(3,1);
      digitalWrite(4,1);
      break;
     case 'r' :
      digitalWrite(2,1);
      break;
     case 'l' :
      digitalWrite(1,1);
      break;
     case 's' :
      digitalWrite(1,0);
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,0);
      break;
    }
  }
}