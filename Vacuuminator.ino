int sensor_pin = A0; 
int output_value ;
void setup() 
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.println("Reading From the Sensor ...");
  delay(2000);

}
void loop() {
  char data = Serial.read();
  Serial.print('data');
  Serial.print("\n");
  if(data == '1')
  {
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      data=Serial.read();
   }
   else if(data == '2')
  {
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      data=Serial.read();
   }
      else if(data == '3')
  {
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW); 
      digitalWrite(11,HIGH);
      data=Serial.read();
   }
      else if(data == '4')
  {
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      data = Serial.read();
   }
     else if(data == '5')
  {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    data = Serial.read();   
  }
  else if(data == '6')
  {
    digitalWrite(6,HIGH);
    data = Serial.read();   
  }
  else if(data == '7')
  {
    digitalWrite(6,LOW);
    data = Serial.read();   
  }
  else if(data == '8')
  {
      output_value= analogRead(sensor_pin);
      output_value = map(output_value,550,0,0,100);
      Serial.print("Mositure : ");
      Serial.print(output_value);
      Serial.println("%");
      delay(1000);
  }
}
