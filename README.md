# ESP12F_Relay_X4

Olá pessoal, aqui é mais um conteudo da Athenas Arch.

Link do canal para vídeos da placa em: https://www.youtube.com/channel/UCpN0rPQxaVmqBYqXyltqowQ

Redes Sociais:
   - Instagram: https://www.instagram.com/athenasarch/

   - YouTube: https://www.youtube.com/channel/UCpN0rPQxaVmqBYqXyltqowQ


* Pensando em facilitar o desenvolvimento de projetos, trouxemos a placa ESP12F_Relay_X4.

# A placa conta com:

    1 - Módulo ESP-12F WiFi estável integrado, com memória Flash de 4M Byte;
    
    2 - As portas I/O e a porta de download do programa (através da UART) estão com fácil acesso, para facilitar o desenvolvimento;
    
    3 - Placa possui circuito para alimentação AC-DC integrada, é possível alimentar a placa através de:
 	    a) Tensão alternada da rede (tomada) AC – de 90 a 250VAC;
        b) Fonte de alimentação DC 7 a 30VDC;
        c) Entrada por USB ou fonte de 5V;
    
    4 - Botão de reinicialização "RST" do módulo WiFi integrado;
    
    5 - ESP-12F oferece suporte a ferramentas de desenvolvimento como Eclipse / Arduino IDE e fornece programas de referência no ambiente de desenvolvimento Arduino;
    
    6   - Existem 4 relés de 5V na placa, que emitem sinais de contato seco NA/NF/COM (Aberto, fechado e comum), 
        - adequados para controlar cargas cuja tensão de trabalho está dentro de: AC 250V – 10A / DC30V - 10A;
    
    7 - Indicador de fonte integrado, 1 LED programável e indicador de relé;

# Organização de projetos
    - Os softwares são desenvolvidos utilizado as bibliotecas do Arduino com o Platformio (sim, os projetos devem rodar na intreface classica do arduino).
    - Na pasta "Hardware": Estão localizados os arquivos de desenho da placa.
    - Na pasta "Firmware": Estão lozalizados os codigos Arduino.
    - Na pasta "Documentos": Estão lozalizados os arquivos auxilizares necessários para um completo entendimento do projeto.
    - Na pasta "Codigos": Estão lozalizados apenas os codigos de exemplo utilizando a IDE do Arduino.

 # Descrição do hardware - ESP8266 12F - Relay X4 - PINOUT:

   ![pinout](https://user-images.githubusercontent.com/79209419/110700034-3f4a1d80-81ce-11eb-9f71-de88c78f67f9.png)

# GRAVAÇÃO DA PLACA COM "FTDI":

	1) FTDI Pinos 	-----------------------------	ESP12F_RELAY_X1 Pinos:
	   - GND	-----------------------------	GND
	   - VCC	-----------------------------	5V
	   - TX		-----------------------------	RX
	   - RX		-----------------------------	TX

![image](https://github.com/AthenasArch/ESP12F_Relay_X4/blob/main/Documentos/GravarComFTDI.png?raw=true)

# GRAVAÇÃO DA PLACA COM "ARDUINO UNO":

OBS: Para gravar com o Arduino uno, é necessário remover o microcontrolador ATMEGA328 da placa.

	1) UNO Pinos 	-----------------------------	ESP12F_RELAY_X1 Pinos:
	   - GND	-----------------------------	GND
	   - 5V		-----------------------------	5V
	   - TX		-----------------------------	RX
	   - RX		-----------------------------	TX
![image](https://github.com/AthenasArch/ESP12F_Relay_X4/blob/main/Documentos/GravarComUno.png?raw=true)

By: Leonardo HIlgemberg Lopes.
