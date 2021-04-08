#include <SoftwareSerial.h>

SoftwareSerial btSerial(2, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  btSerial.begin(9600);

}
char comando; //Variável para receber o comando lido pela Serial

void loop() {
  if (btSerial.available()) {
    delay(3);
    comando = btSerial.read(); //Lê a serial
    Serial.write(comando);

    //Lógica dos comandos recebidos pela Serial
    switch (comando) {
      //Controle Mode 1--------------------------------------------------------------
      case 'X':
        Serial.print(" velocidade para Direita : ");
        Serial.println(StringVelocidade('X').toInt()); //Escreve a velocidade que o carrinho vai andar para direita
        break;
      case 'x':
        Serial.print(" velocidade para Esquerda : ");
        Serial.println(StringVelocidade('x').toInt()); //Escreve a velocidade que o carrinho vai andar para esquerda
        break;
      case 'Y':
        Serial.print(" velocidade para Frente : ");
        Serial.println(StringVelocidade('Y').toInt()); //Escreve a velocidade que o carrinho vai andar para frente
        break;
      case 'y':
        Serial.print(" velocidade para tras : ");
        Serial.println(StringVelocidade('y').toInt()); //Escreve a velocidade que o carrinho vai andar para trás
        break;
      case '<':
        Serial.println("Seta Esquerda");
        break;
      case '>':
        Serial.println("Seta Direita");
        break;
      case 'A':
        Serial.println(" maiusculo");
        break;
      case 'a':
        Serial.println(" minusculo");
        break;
      case 'B':
        Serial.println(" maiusculo");
        break;
      case 'b':
        Serial.println(" minusculo");
        break;
      case 'C':
        Serial.println(" maiusculo");
        break;
      case 'c':
        Serial.println(" minusculo");
        break;
      case 'D':
        Serial.println(" maiusculo");
        break;
      case 'd':
        Serial.println(" minusculo");
        break;
      case 'E':
        Serial.println(" maiusculo");
        break;
      case 'e':
        Serial.println(" minusculo");
        break;

      //Controle Mode 2--------------------------------------------------------------
      case 'F':
        Serial.println(" maiusculo");
        break;
      case 'f':
        Serial.println(" minusculo");
        break;
      case 'G':
        Serial.println(" maiusculo");
        break;
      case 'g':
        Serial.println(" minusculo");
        break;
      case 'H':
        Serial.println(" maiusculo");
        break;
      case 'h':
        Serial.println(" minusculo");
        break;
      case 'I':
        Serial.println(" maiusculo");
        break;
      case 'i':
        Serial.println(" minusculo");
        break;
      case 'J':
        Serial.println(" maiusculo");
        break;
      case 'j':
        Serial.println(" minusculo");
        break;
      case '0':
        Serial.println(" Velocidade");
        break;
      case '1':
        Serial.println(" Velocidade");
        break;
      case '2':
        Serial.println(" Velocidade");
        break;
      case '3':
        Serial.println(" Velocidade");
        break;
      case '4':
        Serial.println(" Velocidade");
        break;
      case '5':
        Serial.println(" Velocidade");
        break;
      case '6':
        Serial.println(" Velocidade");
        break;
      case '7':
        Serial.println(" Velocidade");
        break;
      case '8':
        Serial.println(" Velocidade");
        break;
      case '9':
        Serial.println(" Velocidade");
        break;
      case '+':
        Serial.println(" indo para frente");
        break;
      case '-':
        Serial.println(" indo para traz");
        break;
      case '.':
        Serial.println(" parado");
        break;
      case '*':
        Serial.println(" direita");
        break;
      case '/':
        Serial.println(" esquerda");
        break;
      case '=':
        Serial.println(" meio");
        break;
      //Controle mode 3--------------------------------------------------------------
      case 'K':
        Serial.println(" maiusculo");
        break;
      case 'k':
        Serial.println(" minusculo");
        break;
      case 'L':
        Serial.println(" maiusculo");
        break;
      case 'l':
        Serial.println(" minusculo");
        break;
      case 'M':
        Serial.println(" maiusculo");
        break;
      case 'm':
        Serial.println(" minusculo");
        break;
      case 'N':
        Serial.println(" maiusculo");
        break;
      case 'n':
        Serial.println(" minusculo");
        break;
      case 'O':
        Serial.println(" maiusculo");
        break;
      case 'o':
        Serial.println(" minusculo");
        break;
      case 'P':
        Serial.println(" maiusculo");
        break;
      case 'p':
        Serial.println(" minusculo");
        break;
      case 'Q':
        Serial.println(" maiusculo");
        break;
      case 'q':
        Serial.println(" minusculo");
        break;
      case 'R':
        Serial.println(" maiusculo");
        break;
      case 'r':
        Serial.println(" minusculo");
        break;
      case 'S':
        Serial.println(" maiusculo");
        break;
      case 's':
        Serial.println(" minusculo");
        break;
      case 'T':
        Serial.println(" maiusculo");
        break;
      case 't':
        Serial.println(" minusculo");
        break;
      case 'U':
        Serial.println(" maiusculo");
        break;
      case 'u':
        Serial.println(" minusculo");
        break;
      case 'V':
        Serial.println(" maiusculo");
        break;
      case 'v':
        Serial.println(" minusculo");
        break;
      case '(':
        Serial.println(" simbolo 1");
        break;
      case ')':
        Serial.println(" simbolo 2");
        break;
      case '[':
        Serial.println(" simbolo 1");
        break;
      case ']':
        Serial.println(" simbolo 2");
        break;
      case '{':
        Serial.println(" simbolo 1");
        break;
      case '}':
        Serial.println(" simbolo 2");
        break;
      case ':':
        Serial.println(" simbolo 1");
        break;
      case ';':
        Serial.println(" simbolo 2");

    }
  }
}

// Função para delimitar a string de números recebidos como velocidade
String StringVelocidade(char delimitador) {
  delay(3);
  String readString = "";
  while (btSerial.available()) {
    char c = btSerial.read();
    if (c == delimitador)
      break;
    readString += c;
    delay(30);
  }
  readString.trim();
  return readString;
}
