//Programa 3

//Montar el red verde en la posición B y conectarlo al pin 3, y el programa debe realizar parpadeos cada medio segundo
//de forma alterna, mientras el led rojo esta apagado el verde encendido y viceversa

//definiciones
#define LED_ROJO 2                //constante LED_ROJO=2
#define LED_VERDE 3               //constante LED_VERDE=3

void setup()                      // Función de Inicialización
{
  pinMode(LED_ROJO, OUTPUT);      //Configura el pin 2 como salida
  pinMode(LED_VERDE, OUTPUT);     //Configura el pin 3 como salida
}

void loop()                       // Función Bucle 
{ 
//parpadeos rojo
  digitalWrite(LED_ROJO, HIGH);  //Enciende el led de rojo para que se encienda
  delay(500);                    //Espera 500 milisegundos
  digitalWrite(LED_ROJO, LOW);   //Configura el led de rojo para que se apague                 
//parpadeos verde               
  digitalWrite(LED_VERDE, HIGH); //Enciende el led de verde para que se encienda
  delay(500);                    //Espera 500 milisegundos
  digitalWrite(LED_VERDE, LOW);  //Configura el led de verde para que se apague    
}