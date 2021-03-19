int A0;
void setup() 
{
pinMode(A0,INPUT);
Serial.begin(9600);
}
void loop()
{
 int var = analogWrite(A0);
 Serial.println(var); 
 if(var==1)
 Serial.println(LED,HIGH);
 else if(var == 0)
 Serial.println(LED,LOW);
}
}
