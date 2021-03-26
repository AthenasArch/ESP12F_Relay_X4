/**
 * @brief Arquivo exemplo de utilizacao da placa rele 4x com ESP8266 - Arduino IDE.
 * @name 
 * @version | 1.0                   |
 * @date    | 24/03/2021            |
 * @author  | athenasarch@gmail.com |
 * @file    | main.cpp              |
 **/

#include <Arduino.h> // biblioteca padrao do arduino.

#define TOGGLE_DATA(DATA) ((DATA)?DATA=0:DATA=1) // utilizado para inverter estado de variavel.

#define PIN_RELAY_1 16  // pino que esta localizado o Rele 1.
#define PIN_RELAY_2 14  // pino que esta localizado o Rele 2.
#define PIN_RELAY_3 12  // pino que esta localizado o Rele 3.
#define PIN_RELAY_4 13  // pino que esta localizado o Rele 4.
#define QTTY_RELAYS 4   // Quantidade de reles disponievis...

#define RELAY_ON    1   // constante informando que o rele esta ativo.
#define RELAY_OFF   0   // constante informando que o rele esta desativo.

uint8_t cntRelays = 0;  // variavel de contador.

void initPinsRelay( void );
void timerRelay( unsigned long timeInterval ); // inicializa funcao de intervalo do rele.

/**
 * @brief Funcao Init.
 **/
void setup() {

    Serial.begin(115200); // inicia a comunicacao serial.
    pinMode(PIN_RELAY_1, OUTPUT); // seta pino do rele como saida.
    pinMode(PIN_RELAY_2, OUTPUT); // seta pino do rele como saida.
    pinMode(PIN_RELAY_3, OUTPUT); // seta pino do rele como saida.
    pinMode(PIN_RELAY_4, OUTPUT); // seta pino do rele como saida.

    Serial.println("\r\r\n\nESP8266 - Serial INIT\r\r\n\n"); // imprime algo na porta serial.
}

/**
 * @brief Funcao Loop infinito. 
 **/
void loop() {

    timerRelay(1000); // chama a funcao de controle dos reles.
}

/**
 * @brief Ativa e desativa o rele a cada intervalo de tempo.
 * 
 * @param timeInterval tempo de acionamento entre os reles.
 * 
 * @return void
**/
void initPinsRelay( void ){

}

/**
 * @brief Ativa e desativa o rele a cada intervalo de tempo.
 * 
 * @param timeInterval tempo de acionamento entre os reles.
 * 
 * @return void
**/
void timerRelay( unsigned long timeInterval ){

    static unsigned long timerRelay = 0;
    static uint8_t toogleRelay=0;

    // funcao executada a cada 1000ms
    if(millis() - timerRelay > timeInterval){
        
        timerRelay = millis();
        
        // Serial.print("CNT: "); Serial.println( toogleRelay / timeInterval); // printa o contador de tempo.

        TOGGLE_DATA(toogleRelay);
    
        if(cntRelays>4){
            Serial.print("OFF - Desliga todos os Reles.");
            cntRelays=0;
        } else {
            cntRelays++;
            Serial.print("ON - Rele ");
            Serial.print(cntRelays);
            Serial.println("Ativo.");
        }

        switch(cntRelays){
            case 0:
                digitalWrite(PIN_RELAY_1, RELAY_OFF);
                digitalWrite(PIN_RELAY_2, RELAY_OFF);
                digitalWrite(PIN_RELAY_3, RELAY_OFF);
                digitalWrite(PIN_RELAY_4, RELAY_OFF);
                break;
            case 1:
                digitalWrite(PIN_RELAY_1, RELAY_ON);
                break;
            case 2:
                digitalWrite(PIN_RELAY_2, RELAY_ON);
                break;
            case 3:
                digitalWrite(PIN_RELAY_3, RELAY_ON);
                break;
            case 4:
                digitalWrite(PIN_RELAY_4, RELAY_ON);
                break;
        }
    }
}