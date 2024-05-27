#define LED_VERDE 2
#define PULSADOR_1 8
#define PULSADOR_2 9
 
void setup() {
pinMode(PULSADOR_1,INPUT);
pinMode(PULSADOR_2,INPUT);
pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  if((digitalRead(PULSADOR_1)==LOW) || (digitalRead(PULSADOR_2)==low) 
  {
    digitalWrite(LED_VERDE,HIGH);

  }
  else
  {
    digitalWrite(LED_VERDE,LOW)
  }

}