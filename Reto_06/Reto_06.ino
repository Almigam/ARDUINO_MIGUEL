//Programa 6

//Mostrar los números binarios de el 1-15. 
//encendidas=1
//apagadas=0

//definiciones

#define LED_ROJO 2                //constante LED_ROJO=2
#define LED_VERDE 3               //constante LED_VERDE=3
#define LED_AMARILLO 4            //constante LED_AMARILLO=3
#define LED_VERDE2 5              //constante LED_VERDE2=5

void setup()                      // Función de Inicialización
{
  pinMode(LED_ROJO, OUTPUT);      //Configura el pin 2 como salida
  pinMode(LED_VERDE, OUTPUT);     //Configura el pin 3 como salida
  pinMode(LED_AMARILLO, OUTPUT);  //Configura el pin 4 como salida
  pinMode(LED_VERDE2, OUTPUT);    //Configura el pin 4 como salida
}

void loop()                       // Función Bucle 
{
//numero 0
  delay (500);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 1
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 2
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 3
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 4
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 5
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 6
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 7
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 8
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

//numero 9
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

  //numero 10
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

  //numero 11
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

  //numero 12
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

  //numero 13
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

  //numero 14
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, LOW);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

  //numero 15
  delay (1000);
  digitalWrite(LED_ROJO, HIGH);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, HIGH);
  digitalWrite(LED_VERDE2, HIGH);
  delay (1000);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE2, LOW);

}