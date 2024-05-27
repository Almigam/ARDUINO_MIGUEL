//Módulo Potenciometro
//Reto 19
//Copia y carga el siguiente programa para entender el Plotter Serie.

/*
Conecta un módulo potenciómetro a la entrada analógica A5.
Copia y carga el siguiente programa para entender el Plotter Serie.
Observa las variaciones de la gráfica según mueves el potenciómetro
*/

#define POT A5 // POTENCIÓMETRO en entrada analógica A5
int valor_pot = 0; // Variable para recoger valor POTENCIOMETRO
void setup()
{
Serial.begin(9600); // Configuro Monitor Serie 9600 Baudios
}
void loop()
{
// Cargamos en la varible valor del POTENCIÓMETRO
valor_pot = analogRead(POT);
Serial.println(valor_pot);
delay(100);
}