//EJERCICIO 11 EL BUCLE FOR Crear un programa que emita secuencias de destellos(3 destellos)

//definiciones
#define LED_ROJO 2                   // constante LED_ROJO=2

void setup() {                       // Función de Inicialización

  pinMode (LED_ROJO, OUTPUT);        // configura el pin 2 como salida
  
}

void loop() {                         //Función de principal

  for (int x=0; x<3; x++)             //inicializamos variable x a 1
                                      //mientras x menor 3, incrementamos 1
  {
    digitalWrite(LED_ROJO, HIGH);    //LED se enciende
    delay(500);                      //espera 0.5 segundos
    digitalWrite(LED_ROJO, LOW);     //LED se apaga
    delay(500);                      //espera 0.5 segundos
  }
  delay(3000);                       //detenemos los destellos 3 segundos
  
}
