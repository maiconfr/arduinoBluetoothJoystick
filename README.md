# Aplicativo desenvolvido pela <a href="https://indoortech.com.br/">Indoor Tech</a>

![](indoortech.png)

# Descrição do Aplicativo "arduinoBluetoothJoystick"

Este repositório visa explicar o funcionamento do aplicativo "arduinoBluetoothJoystick" para Android. O aplicativo foi desenvolvido como um controle bluetooth para carrinhos conectados em arduinos.

O aplicativo foi testado apenas com os módulos bluetooth:
```sh
Módulo Bluetooth HC-05
Módulo Bluetooth HC-06
```

O aplicativo tem as seguintes funções:
- 3 módulos de controle e um terminal para ver os comandos lidos pela serial;
- Conexão bluetooth direto pelo aplicativo;
- Salva o úlitmo módulo controle utilizado;
- Salva o último dispositivo bluetooth conectado, que pode ser reconectado direto pelo aplicativo.

### Controle Mode 1
O controle 1 conta com 6 botões e dois joysticks. Os botões de letras (A até E) enviam dois comandos pela serial, maiúsculo e minúsculo. O botão representate de cada chave ("<" e ">") envia o valor de cada chave conforme o botão é clicado.

O joystick da esquerda representa os comando de andar para frente e para trás do carrinho. Ele envia um valor "Y" com um número para indicar o comando para frente e a velocidade, e para andar para trás o valor é mínusculo "y". Por exemplo:
- Valor enviado pela serial para andar para frente a uma velocidade de 20
```sh
Y20
```

- Valor enviado pela serial para andar para trás a uma velocidade de 20
```sh
y20
```

O joystick da direita representa virar para esquerda e direita. Ele envia um valor, "X" ou "x", com um número para indicar o quanto o carrinho irá virar. Por exemplo:
- Valor enviado pela serial para andar para esquerda com um grau de 60
```sh
X60
```

- Valor enviado pela serial para andar para direita com um grau de 60
```sh
x60
```

### Controle Mode 2
O controle 2 conta com 9 botões e uma barra de velocidade. Os botões de letras (F até J) enviam dois comandos pela serial, maiúsculo e minúsculo. Os botões representates com setas indicam a direção do carrinho, e a velocidade é ficaxa pelo valor selecionado na barra de velocidade (valores de 0 a 9).

Nos comandos de direção temos dois toques de comando, um para iniciar o movimento e o segundo toque na mesma tecla para cancelar o comando. Temos a seguinte relação dos valores enviados pela serial:

- Clicar na seta para cima a primeira vez: "+";
- Clicar na seta para cima a segunda vez: ".";
- Clicar na seta para baixo a primeira vez: "-";
- Clicar na seta para baixo a segunda vez: ".";
- Clicar na seta para esquerda a primeira vez: "/";
- Clicar na seta para esquerda a segunda vez: "=";
- Clicar na seta para direita a primeira vez: "*";
- Clicar na seta para direita a segunda vez: "=";

### Controle Mode 3
Neste controle temos uma série de botões de switches. Os botões de letras (O até V) enviam dois comandos pela serial, maiúsculo e minúsculo, e os switches enviam as letras conforme selecionado.

### Controle Mode 4
Esta aba é um terminal que mostra todos os comandos enviados e recebidos pela serial. Nele contém também um espaço onde você pode enviar um comando direto pela Serial.


