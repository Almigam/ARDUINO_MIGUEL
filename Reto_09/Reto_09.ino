//EJERCICIO 9 cuando pulse el pulsador, el led se enciende durante 3 segundos y cuando no pulsamos el led se apaga

void setup() {                         // Función de Inicialización

#define LED_ROJO_A 2                   // constante LED_ROJO=2
#define PULSADOR 8                     // constante PULSADOR=8
  pinMode (LED_ROJO_A, OUTPUT);        // configura el pin 2 como salida
  pinMode (PULSADOR, INPUT);           // configura el pin 8 como entrada

}

void loop() {                         // Función de bucle

if (digitalRead (PULSADOR)==LOW)      //  Función if condicional LOW = PULSANDO, HIGH NO PULSANDO, == si pulso se enciende, 
                                      // , != esta siempre encendido pero si le pulso se apaga
  {
    digitalWrite(LED_ROJO_A, HIGH);   //  Dice que no esta pulsado al iniciar
    delay(3000);                      //  Espera 3 segundos
  }
else                                  // Condicionador que hace que se cumpla lo de abajo si el if no se cumple

  {
  digitalWrite(LED_ROJO_A, LOW);      
  }

}