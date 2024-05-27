//EJERCICIO 12 Semaforo de peatones

//definiciones
#define LED_VERDE 3                    // constante LED_BLANCO=3
#define LED_ROJO 2                   // constante LED_ROJO=2
#define PULSADOR 8                     // constante PULSADOR=8

void setup() {                         // Función de Inicialización

  pinMode (LED_ROJO, OUTPUT);        // configura el pin 2 como salida
  pinMode (PULSADOR, INPUT);           // configura el pin 8 como entrada
  pinMode (LED_VERDE, OUTPUT);        // Configura el pin 3 como salida
  
}

void loop(){
  if (digitalRead (PULSADOR)==LOW)  
  {

    delay(2000);
    digitalWrite(LED_ROJO, LOW);      
    digitalWrite(LED_VERDE, HIGH);    
    delay(5000);                      
    digitalWrite(LED_VERDE, LOW);    
  
    for (int x=0; x<5; x++)
    {
    digitalWrite(LED_VERDE, LOW);
    delay(500);
    digitalWrite(LED_VERDE, HIGH);     
    delay(500); 
    }

    digitalWrite(LED_VERDE, LOW);   //  Dice que el led encienda
    digitalWrite(LED_ROJO, HIGH);    // Dice que el Led se apague
    delay(5000);
  
    for (int x=0; x<5; x++)
    {
    digitalWrite(LED_ROJO, HIGH);
    delay(500);
    digitalWrite(LED_ROJO, LOW);     
    delay(500); 
    }
  }

  else 
  {
  digitalWrite(LED_ROJO, HIGH);
  }
}                      


                                    
                                  
                                
  
                     
