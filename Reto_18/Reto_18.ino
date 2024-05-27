//Reto 18  Controlar el número de ledes encendidos en función de la cantidad de luz que reciba el módulo LDR.

// Definiciones
#define pinLDR A5
#define LED_ROJO 2
#define LED_VERDE 3
#define LED_AMARILLO 4
#define LED_BLANCO 5

void setup() {                                // Funcón inicial.
  pinMode (LED_ROJO, OUTPUT);                 // Defino al led rojo como salida
  pinMode (LED_VERDE, OUTPUT);                // Defino al led verde como salida
  pinMode (LED_AMARILLO, OUTPUT);             // Defino al led amarillo como salida
  pinMode (LED_BLANCO, OUTPUT);               // Defino al led blanco como salida
  Serial.begin(9600);                         // Inicializar comunicación serial a 9600 baudios
}

void loop() {                                 // Funcón principal
  
  int valorLDR = 1024 - analogRead(pinLDR);   // Leer el valor analógico del LDR, a menor valor menos luz.
  Serial.print("Luz: ");                      // imprime los datos especificados en una nueva línea del monitor serie, agregando un salto de línea al final.
  
  if(valorLDR < 550)                          
  {
    digitalWrite(LED_ROJO, HIGH);
    Serial.println(valorLDR);
    delay(100);  
  }
  
  if(valorLDR < 250)
  {
    digitalWrite(LED_VERDE, HIGH);
    Serial.println(valorLDR);
    delay(100);  
  }

  if(valorLDR < 150)
  {
    digitalWrite(LED_AMARILLO, HIGH);
    Serial.println(valorLDR);
    delay(100);  
  }

  if(valorLDR < 50)
  {
    digitalWrite(LED_BLANCO, HIGH);
    Serial.println(valorLDR);
    delay(100);  
  }

  
  
  else {
    digitalWrite(LED_ROJO, LOW );
    digitalWrite(LED_VERDE, LOW );
    digitalWrite(LED_AMARILLO, LOW );
    digitalWrite(LED_BLANCO, LOW );
  }

}
