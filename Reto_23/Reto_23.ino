//Reto 23
/*
Partiendo del montaje y programa del reto 22, añade un módulo pulsador y modifica el
programa para que cuando se pulse el pulsador el zumbador se quede en silencio.
Documenta el montaje y el programa a continuación.
*/
#define pulsador 8
#define POT A5 // POTENCIÓMETRO en entrada analógica A5
#define ZUM 2  // ZUMBADOR en entrada 2

int valor_pot = 0; // Variable para recoger valor POTENCIOMETRO

void setup()
{
pinMode(pulsador, INPUT); // Configuro el pulsador como salida
pinMode(ZUM, OUTPUT);     // constante LED_R=2 y la configuro como salida
Serial.begin(9600);       // Configuro Monitor Serie 9600 Baudios
}

void loop()       // Función principal
{
  int frecuencia_zum = valor_pot+200; // variable frecuencia zumbador
  valor_pot = analogRead(POT);        // Hace que los valores se pongan en el monitor Plotter Serie
  Serial.println(valor_pot);          // Pone los valores en la gráfica de Plotter Serie
  tone(ZUM,frecuencia_zum);
  if((digitalRead(pulsador)==LOW);    // función if que dicta que si el pulsador esta pulsado deje de sonar el zumbador
  {   
    tone(ZUM,frecuencia_zum);
    noTone(ZUM);
  }

}


