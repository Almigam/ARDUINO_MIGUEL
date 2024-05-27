//Programa 2 
//Conectar led reojo a módulo A, para que realice dos parapadeos lentos y dos parpadeos rápidos seguidos.
//definiciones
#define LED_ROJO 2                //constante LED_ROJO=2

void setup()                      // Función de Inicialización
{
  pinMode(LED_ROJO, OUTPUT);      //Configura el pin 2 como salida
}

void loop()                       // Función Bucle 
{ 
//parpadeos lentos
  delay(2000); 
  digitalWrite(LED_ROJO, HIGH);  //Enciende el led rojo para que se encienda
  delay(2000);                   //Espera 2000 milisegundos
  digitalWrite(LED_ROJO, LOW);   //Configura el led rojo para que se apague
  delay(2000);                   //Espera 2000 milisegundos
//parpadeos rápidos
  delay(500);
  digitalWrite(LED_ROJO, HIGH);  //Enciende el led de usuario para que se encienda
  delay(500);                    //Espera 500 milisegundos
  digitalWrite(LED_ROJO, LOW);   //Configura el led de usuario para que se apague
  delay(500);                    //Espera 500 milisegundos
}
