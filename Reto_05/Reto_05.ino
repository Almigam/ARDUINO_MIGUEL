//Programa 5

//Hacer cohe fantastico

//definiciones

#define LED_ROJO 2                //constante LED_ROJO=2
#define LED_VERDE 3               //constante LED_VERDE=3
#define LED_AMARILLO 4            //constante LED_AMARILLO=4
#define LED_VERDE2 5              //constante LED_VERDE=5
#define LED_ROJO2 6               //constante LED_ROJO=6


void setup()                      // Función de Inicialización
{
  pinMode(LED_ROJO, OUTPUT);      //Configura el pin 2 como salida
  pinMode(LED_VERDE, OUTPUT);     //Configura el pin 3 como salida
  pinMode(LED_AMARILLO, OUTPUT);  //Configura el pin 4 como salida
  pinMode(LED_VERDE2, OUTPUT);    //Configura el pin 3 como salida
  pinMode(LED_ROJO2, OUTPUT);     //Configura el pin 2 como salida
}

void loop()                       // Función Bucle 
{ 
//ida

//led rojo vuelta1
  digitalWrite(LED_ROJO, HIGH);
  delay(100);
  digitalWrite(LED_ROJO, LOW);             
  delay(100);
//led verde vuelta1
  digitalWrite(LED_VERDE, HIGH);
  delay(100);
  digitalWrite(LED_VERDE, LOW);
  delay(100);
//led amarillo vuelta1
  digitalWrite(LED_AMARILLO, HIGH);
  delay(100);
  digitalWrite(LED_AMARILLO, LOW);
  delay(100);
//led verde2 vuelta1
  digitalWrite(LED_VERDE2, HIGH);
  delay(100);
  digitalWrite(LED_VERDE2, LOW);
  delay(100);
//led rojo2 vuelta1
  digitalWrite(LED_ROJO2, HIGH);
  delay(100);
  digitalWrite(LED_ROJO2, LOW);
  delay(100);

//vuelta

//led verde2 vuelta2
  digitalWrite(LED_VERDE2, HIGH);
  delay(100);
  digitalWrite(LED_VERDE2, LOW);
  delay(100);
//led amarillo vuelta2
  digitalWrite(LED_AMARILLO, HIGH);
  delay(100);
  digitalWrite(LED_AMARILLO, LOW);
  delay(100);
//led verde vuelta2
  digitalWrite(LED_VERDE, HIGH);
  delay(100);
  digitalWrite(LED_VERDE, LOW);
  delay(100);

}