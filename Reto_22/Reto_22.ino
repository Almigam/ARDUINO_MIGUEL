//Reto 22
/*
Para este reto necesitamos un módulo zumbador y un módulo potenciómetro.
Realiza un programa que controle la frecuencia del zumbador con el valor del
potenciómetro, cada vez que se mueva el potenciómetro el sonido del zumbador cambiará,
Para conseguir un mejor rango de sonidos la frecuencia del zumbador está definida por la
siguiente fórmula:
frecuencia_zum = valor_pot + 200
Documenta el montaje y el programa a continuación
*/

#define POT A5 // POTENCIÓMETRO en entrada analógica A5
#define ZUM 2  // ZUMBADOR en entrada 2

int valor_pot = 0; // Variable para recoger valor POTENCIOMETRO

void setup()
{
pinMode(ZUM, OUTPUT);//constante LED_R=2 y la configuro como salida
Serial.begin(9600); // Configuro Monitor Serie 9600 Baudios
}

void loop()
{
int frecuencia_zum = valor_pot + 200; // Variable que marca la frecuencia del zumbador
valor_pot = analogRead(POT);
Serial.println(valor_pot);
tone(ZUM,frecuencia_zum);

}
