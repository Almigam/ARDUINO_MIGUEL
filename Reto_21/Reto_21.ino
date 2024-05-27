#define POT A5 // POTENCIÓMETRO en entrada analógica A5
#define LED_R 2
#define LED_V 3

int valor_pot = 0; // Variable para recoger valor POTENCIOMETRO

void setup()
{
pinMode(LED_R, OUTPUT);//constante LED_R=2 y la configuro como salida
pinMode(LED_V, OUTPUT);//constante LED_V=3 y la configuro como salida
Serial.begin(9600); // Configuro Monitor Serie 9600 Baudios
}

void loop()
{
digitalWrite(LED_R, LOW);
digitalWrite(LED_V, LOW);

// Cargamos en la varible valor del POTENCIÓMETRO
valor_pot = analogRead(POT);

Serial.println(valor_pot);
delay(100);


if(valor_pot <= 512)
{
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_V, LOW);
  Serial.println(valor_pot);
  delay(100);
}   
else 
{
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_V, HIGH);
  Serial.println(valor_pot);
  delay(100);
}

}