//EJERCICIO 9.1 Cambiar el programa anterior(Reto_09) para cuando se pulse, se enciendan durante 4 segundos y cuando se
//, suelte se apague uno de ellos primero y luego a los 2 segundos el otro

void setup() {                         // Función de Inicialización

#define LED_VERDE 3                    // constante LED_VERDE = 3
#define LED_ROJO_A 2                   // constante LED_ROJO=2
#define PULSADOR 8                     // constante PULSADOR=8

  pinMode (LED_ROJO_A, OUTPUT);        // configura el pin 2 como salida
  pinMode (PULSADOR, INPUT);           // configura el pin 8 como entrada
  pinMode (LED_VERDE, OUTPUT);         // Configura el pin 3 como salida
  
}

void loop() {                         // Función de bucle

if (digitalRead (PULSADOR)==LOW)      //  Función if condicional LOW = PULSANDO, HIGH NO PULSANDO, == si pulso se enciende, != esta siempre encendido pero si le pulso se apaga
                                      
  {
    digitalWrite(LED_ROJO_A, HIGH);   //  Dice que no esta pulsado al iniciar
    digitalWrite(LED_VERDE, HIGH);    //  Dice que no esta pulsado al iniciar
    delay(4000);                      //  Espera 4 segundos
  }

else                                  // Condicionador que hace que se cumpla lo de abajo si el if no se cumple

  {
  digitalWrite(LED_ROJO_A, LOW);      //  Dice que el led se apague
  delay(2000);
  digitalWrite(LED_VERDE, LOW);       //  Dice que el led se apague
  }

}