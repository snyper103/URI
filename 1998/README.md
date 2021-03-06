# 1998 - Awari 2.0
Awari é um jogo de um jogador das Antilhas, que é jogado com caixas e pedras em vez de cartões. Outra versão de Awari é jogado com N caixas numeradas de 1 a N, cada uma contendo, no início do jogo, zero ou mais pedras. As regras deste jogo são muito simples, porque há apenas um tipo de movimento válido, que consiste em escolher uma caixa numerada i que contém exatamente i pedras, e em seguida, pegar essas pedras da caixa, a fim de usá-las para adicionar uma única pedra para cada caixa numerada de 1 a i-1; a pedra restante é mantida pelo jogador. Estes movimentos são aplicados em sucessão, desde que exista uma caixa i que contém exatamente i pedras. Quando isso não é mais verdade, o jogo termina. O jogador ganha se, nesta fase, cada caixa está vazia, e perde caso contrário.

Na figura a seguir, no lado esquerdo há um possível estado inicial de um jogo com n = 5 caixas (os círculos) contendo P1 = 0, P2 = 1 , P3= 3, P4 = 0 e P5 = 2 pedras (os pontos pretos). Se a caixa de número 3, que contém P3 = 3 pedras, foi escolhida para dar o próximo passo, a configuração resultante seria a do mostrado no lado direito da figura. Além disso, para o jogador teria agora uma pedra em seu poder.

![image](https://user-images.githubusercontent.com/34819259/176762031-55d2c8c9-687a-4d0f-9012-5e6eb2eab64f.png)

Dado o estado inicial das caixas, você deve determinar se é possível ganhar o jogo, ou seja, se houver uma sequência de movimentos válidos que depois de todas as caixas são deixadas vazias.

#### Entrada
Cada caso de teste é descrito usando duas linhas. A primeira linha contém um inteiro N, indicando o número de caixas (1 ≤ N ≤ 500). A segunda linha contém N números inteiros Pi, que representa o número de pedras nas caixas no início do jogo, a partir da caixa 1 para a caixa N, respectivamente (0 ≤ P_i ≤ 500 para i = 1, ..., N) . Em cada caso de teste que haja pelo menos uma caixa não vazia, isto é, existe i de 1 a N tal que Pi ≠ 0. O fim da linha de entrada é uma linha que contém o número -1.

#### Saída
Para cada caso de teste, você deve imprimir uma única linha contendo um único caractere. Este caractere deve ser a letra maiúscula 'S' se é possível ganhar o jogo; Caso contrário, deve-se a letra maiúscula 'N'.

|Exemplo de Entrada|Exemplo de Saída|
|------------------|----------------|
|5                 |N               |
|0 1 3 0 2         |S               |
|4                 |N               |
|1 1 3 0           |                |
|3                 |                |
|1 2 3             |                |
|-1                |                |

## Requisitos
É necessário ter o compilador de C/C++ instalado em seu computador.

### Execução
Basta compilar os arquivos contidos neste repositório e executá-los.
