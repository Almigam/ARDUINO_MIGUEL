//Reto 17 al tapar el sensor de luz (simulando que es de noche), se encienda el led rojo. Cuando haya claridad en el ambiente el led debe apagarse.

// Definiciones
#define pinLDR A5
#define LED_ROJO 2

void setup() {                                // Funcón inicial.
  pinMode (LED_ROJO, OUTPUT);                 // Defino al led rojo como salida
  Serial.begin(9600);                         // Inicializar comunicación serial a 9600 baudios
}

void loop() {                                 // Funcón principal
  
  int valorLDR = 1024 - analogRead(pinLDR);   // Leer el valor analógico del LDR, a menor valor menos luz.
  Serial.print("Luz: ");                      // imprime los datos especificados en una nueva línea del monitor serie, agregando un salto de línea al final.
  
  if(valorLDR < 250)
  {
    digitalWrite(LED_ROJO, HIGH);
    Serial.println(valorLDR);
    delay(100);  
  }
  
  else {
    digitalWrite(LED_ROJO, LOW );
  }

}
