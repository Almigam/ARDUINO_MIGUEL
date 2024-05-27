//Programa 4

//Los leds deberán encenderese cada 750 ms de forma consecutiva hasta tener todos completamente encencidos, despues
//se mantendrán encendidios drante dos segundos y finalmente se apagan durante un segundo

//definiciones

#define LED_ROJO 2                
#define LED_VERDE 3               //constante LED_VERDE=3
#define LED_AMARILLO 4            //constante LED_AMARILLO=3

void setup()                      // Función de Inicialización
{
  pinMode(LED_ROJO, OUTPUT);      //Configura el pin 2 como salida
  pinMode(LED_VERDE, OUTPUT);     //Configura el pin 3 como salida
  pinMode(LED_AMARILLO, OUTPUT);  //Configura el pin 4 como salida
}

void loop()                       // Función Bucle 
{ 
//parpadeos rojo
  delay(500);
  digitalWrite(LED_ROJO, HIGH);
  delay(750);                 
//parpadeos verde               
  digitalWrite(LED_VERDE, HIGH); 
  delay(750); 
//parpadeos amarillos y mantener durante 2 segundos encendidos                  
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_ROJO, HIGH);
  delay (2000);
//apagar todos
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE, LOW); 
  digitalWrite(LED_ROJO, LOW);
}