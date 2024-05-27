//Reto 16 Módulo LDR programa que active el monitor serie y compruebe las variaciones del nivel de luz que muestra nuestro 
//módulo LDR según lo tapamos con la mano

// Definiciones
#define pinLDR A5

void setup() {                                // Funcón inicial.
  
  Serial.begin(9600);                         // Inicializar comunicación serial a 9600 baudios
}

void loop() {                                 // Funcón principal
  
  int valorLDR = 1024 - analogRead(pinLDR);   // Leer el valor analógico del LDR, a menor valor menos luz.

  
  // Mostrar el valor en el monitor serie

  Serial.print("Luz: ");                     // imprime los datos especificados en una nueva línea del monitor serie, agregando un salto de línea al final.
  Serial.println(valorLDR);                  // la siguiente vez que se imprime algo, aparecerá en una nueva línea en el monitor serie.

  
  delay(500);                                // Esperar 500 milisegundos
}
