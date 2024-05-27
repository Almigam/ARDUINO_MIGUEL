//Reto 24
//Miguel Bercedo
/*
Monta el módulo led blanco en la posición A y el módulo potenciómetro en la posición F.
Confeccionar un programa que modifique el brillo del led blanco mediante el potenciómetro.
*/
#define Blanco 2    // Led Blanco en pin digital 2
#define pot A5      // Potenciómetro en entrada analógica A5

int valor_pot = 0;   // Variable para recoger valor del potenciómetro

void setup()         // Función Inicial
{
  pinMode(Blanco, OUTPUT);  // Configurar el pin del LED como salida
  Serial.begin(9600);       // Iniciar comunicación serie a 9600 baudios
}

void loop()         // Función Principal
{
  valor_pot = analogRead(pot);                // Leer el valor del potenciómetro (0 a 1023)
  Serial.println(valor_pot);                  // Enviar el valor leído al monitor serie
  int brillo = map(valor_pot, 0, 1023, 0, 255); // Mapear el valor del potenciómetro al rango del PWM (0 a 255)
  analogWrite(Blanco, brillo);                // Ajustar el brillo del LED
  delay(10);                                  // Poner un delay de 10 milisegundos
}
