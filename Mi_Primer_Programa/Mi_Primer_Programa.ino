//El primer ejercicio
//El led de usuario
//Definiciones

#define LED_USUARIO 13              //constante LED_USUARIO=13

void setup()                   
{
 pinMode(LED_USUARIO, OUTPUT);      //Configura el pin 13 como salida
}

void loop() 
{
  digitalWrite(LED_USUARIO, HIGH);  //Enciende el led de usuario para que se encienda
  delay(500);                       //Espera 500 milisegundos
  digitalWrite(LED_USUARIO, LOW);   //Configura el led de usuario para que se apague
  delay(500);                       //Espera 500 milisegundos
}
