int redPin =12;
int yellowPin =11;
int greenPin =10;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redPin,HIGH);
delay(2000);
digitalWrite(yellowPin,HIGH);
delay(2000);
digitalWrite(greenPin,HIGH);
delay(2000);

digitalWrite(redPin,LOW);
delay(500);
digitalWrite(yellowPin,LOW);
delay(500);
digitalWrite(greenPin,LOW);
delay(500);
}