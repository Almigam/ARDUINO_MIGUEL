//Reto 01
//El led de usuario
//Definiciones

#define LED_USUARIO 13              //constante LED_USUARIO=13

void setup()                        //No se repite en el setup
{
 pinMode(LED_USUARIO, OUTPUT);      //Configura el pin 13 como salida

  //parpadeo 1
  digitalWrite(LED_USUARIO, HIGH);  //Enciende el led de usuario para que se encienda
  delay(500);                       //Espera 500 milisegundos
  digitalWrite(LED_USUARIO, LOW);   //Configura el led de usuario para que se apague
  delay(500);                       //Espera 500 milisegundos
  //parpadeo 2    
  digitalWrite(LED_USUARIO, HIGH);  //Enciende el led de usuario para que se encienda
  delay(500);                       //Espera 500 milisegundos
  digitalWrite(LED_USUARIO, LOW);   //Configura el led de usuario para que se apague
  delay(500);                       //Espera 500 milisegundos
}

void loop()                         //función principal 
{ 
  delay(2000);                      //Espera 2 segundos
  digitalWrite(LED_USUARIO, HIGH);  //Enciende el led de usuario para que se encienda
  delay(2000);                      //Espera 2 segundos

  digitalWrite(LED_USUARIO, LOW);   //Configura el led de usuario para que se apague
  delay(2000);                      //Espera 2 segundos
}

