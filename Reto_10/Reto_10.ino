//EJERCICIO 10 Completar el programa para que los ledes se enciendan de manera alterna y su frecuencia cambie en:
// función del pulsador: Si el pulsador está presionado los ledes deben alternarse rápidamente (Menos de un segundo)
// Si el pulsador no esta presionado los ledes deben alternarse lentamente (más de dos segundos)

void setup() {                         // Función de Inicialización

#define LED_BLANCO 3                    // constante LED_BLANCO=3
#define LED_ROJO_A 2                   // constante LED_ROJO=2
#define PULSADOR 8                     // constante PULSADOR=8

  pinMode (LED_ROJO_A, OUTPUT);        // configura el pin 2 como salida
  pinMode (PULSADOR, INPUT);           // configura el pin 8 como entrada
  pinMode (LED_BLANCO, OUTPUT);        // Configura el pin 3 como salida
  
}

void loop() {                         // Función de bucle

if (digitalRead (PULSADOR)==LOW)      //  Función if condicional LOW = PULSANDO, HIGH NO PULSANDO, == si pulso se enciende, != esta siempre encendido pero si le pulso se apaga
                                      
  {
    digitalWrite(LED_ROJO_A, HIGH);   //  Dice que el led encienda
    delay(500);                       // Tarda 0.5 segundos
    digitalWrite(LED_ROJO_A, LOW);    // Dice que el Led se apague
    digitalWrite(LED_BLANCO, HIGH);   //  Dice que el led encienda
    delay(500);                       // Tarda 0.5 segundos
    digitalWrite(LED_BLANCO, LOW);    // Dice que el Led se apague
    
  }

else                                  // Condicionador que hace que se cumpla lo de abajo si el if no se cumple

  {
  digitalWrite(LED_ROJO_A, HIGH);      //  Dice que el led encienda
  delay(3000);                         //  Tarda 3 segundos
  digitalWrite(LED_ROJO_A, LOW);       //  Dice que el led se apague
  digitalWrite(LED_BLANCO, HIGH);      //  Dice que el led se encienda
  delay(3000);                         // Tarda 3 segundos
  digitalWrite(LED_BLANCO,LOW);        // Dice que el Led se apague
  }

}
