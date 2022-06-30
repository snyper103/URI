# 1997 - Branco e Preto
O famoso jogo Preto e Branco é um jogo individual que é jogado com um conjunto de fichas idênticas. Cada ficha tem duas faces com cores diferentes. Surpreendentemente, essas cores são preto e branco.

O jogo começa colocando N fichas formando uma única linha. Existe um objetivo que é uma dada sequência de N cores preto ou branco. Em um único movimento, o jogador pode escolher um grupo de fichas consecutivas e inverter a sua cor, em outras palavras, para cada ficha no grupo, a cor que estava voltada para cima, esta voltada para baixo, e a que estava voltada para baixo está virada para cima. O jogo termina quando as cores voltadas para cima são iguais ao objetivo.

Barby acaba de descobrir este jogo e logo ela percebeu que você pode sempre ganhar invertendo cada ficha individualmente, se necessário. Para tornar o jogo mais desafiador para ela, ela queria ganhar no menor número possível de movimentos. Note que Barby apenas se preocupa com quantos movimentos ela faz, e não importa quantas fichas são invertidas em cada jogada. Para saber o quão bem Barby está jogando, ela lhe pediu para fazer um programa que, dada a posição inicial da ficha e o objetivo, mostra o menor número possível de movimentos para ganhar o jogo. Você vai dizer que não?

#### Entrada
A entrada contém vários casos de teste. Cada caso de teste é descrito em uma única linha que contém duas palavras não vazias S e T de igual tamanho e, no máximo, 500 caracteres cada. S indica a posição inicial da ficha, enquanto T representa o objetivo. Ambas as palavras contêm apenas letras maiúsculas "B" e "N", que representam, respectivamente, branco e preto. A última linha da entrada contém dois asteriscos ("*") separados por um espaço único e não deve ser processado como um caso de teste.

#### Saída
Para cada caso de teste de saída, imprima uma única linha com um inteiro representando a quantidade mínima de jogadas necessárias para passar as fichas da posição inicial S para o objetivo T.

|Exemplo de Entrada   |Exemplo de Saída|
|---------------------|----------------|
|BBNBBNBBBB NNNNNBBNNB|3               |
|BNBNB NBNBN          |1               |
|BNBN NBNB            |1               |
|B B                  |0               |
|* *                  |                |

## Requisitos
É necessário ter o compilador de C/C++ instalado em seu computador.

### Execução
Basta compilar os arquivos contidos neste repositório e executá-los.
