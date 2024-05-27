void setup() {
  //RETO 13
  //DO RE MI FA SOL LA SI EN EL ZUMBADOR DURANTE 5 SEGUNDOS
#define ZUMBADOR 2
#define PULSADOR 7
pinMode(ZUMBADOR, OUTPUT);
pinMode(PULSADOR, INPUT);
}

void loop() {
  if (digitalRead (PULSADOR) == LOW) //DEFINIMOS LA CONDICIONAL SI EL PULSADOR ES ACTIVADO ENCIENDA EL LED
  {
   tone (ZUMBADOR, 262); //DO
   delay(750);
   tone (ZUMBADOR, 294); //RE
   delay(750);
   tone (ZUMBADOR, 330); //MI
   delay(750);
   tone (ZUMBADOR, 349); //FA
   delay(750);
   tone (ZUMBADOR, 392); //SOL
   delay(750);
   tone (ZUMBADOR, 440); //LA
   delay(750);
   tone (ZUMBADOR, 494); //SI
   delay(750);

   noTone(ZUMBADOR); //SILENCIAR
}
  else 
  {
  }
  }