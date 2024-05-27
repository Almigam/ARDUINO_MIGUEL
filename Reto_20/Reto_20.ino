//Reto 20
/*
Monta dos módulos led en las posiciones A y B y un módulo potenciómetro en la posición F.
Crea un programa que cuando la lectura del potenciómetro sea menor o igual de 512
cuentas se encienda únicamente el led A y cuando esté por encima de este valor, se
encienda únicamente el B.
*/

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


if(valor_pot <= 512)
{
  digitalWrite(LED_R, HIGH);
  delay(300);
}    

if (valor_pot > 512) 
{
  digitalWrite(LED_V, HIGH);
  delay(300);
}
}


