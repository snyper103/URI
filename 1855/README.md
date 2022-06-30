# 1855 - Mapa do Meistre
Sam encontrou um conjunto de mapas do velho Meistre Aemon que, a princípio, deviam mostrar, cada um, a localização de um baú com obsidiana. Entretanto, ao analisar, Sam percebeu que alguns mapas possuíam erros óbvios, e outros só mandando uma equipe para explorar para saber.

É certo que alguns mapas apontam para uma localização absurda fora do mapa e alguns terminam em círculos, tornando estes mapas completamente inúteis.

Como são muitos mapas, os irmãos da patrulha da noite são poucos e o inverno está chegando, o seu trabalho é fazer um programa para verificar se um mapa leva ou não a um ponto com um baú de obsidiana.

Os mapas tem as seguintes características:
* O ponto de partida de todos os mapas é o canto superior esquerdo.
* São retangulares e em cada ponto apresenta um destes símbolos:
  * Um espaco de terreno atravessável.
  * Uma flecha, representando uma possível troca de direção;
  * Um baú.

Como os lugares que estes mapas descrevem são cheios de perigos, é vital que se siga o caminho descrito no mapa.

#### Entrada
Na primeira linha, está um inteiro positivo x < 100 que simboliza a largura do mapa.
Na segunda linha, está um inteiro positivo y < 100 que simboliza a altura do mapa.
As linhas seguintes contêm diversos caracteres respeitando as dimensões do mapa.
Os caracteres válidos são:
* Uma flecha para a direita: >
* Uma flecha para a esquerda: <
* Uma flecha para baixo: v
* Uma flecha para cima: ^
* Um espaco de terreno atravessável: .
* Um baú: *

#### Saída
A saída deve consistir de uma única linha com um único caracter ! ou *.

! significa que o mapa é inválido. * significa que o mapa é válido.

|Exemplos de Entrada|Exemplos de Saída|
|-------------------|-----------------|
|6                  |*                |
|1                  |                 |
|>....*             |                 |
|                   |                 |
|7                  |!                |
|5                  |                 |
|>.....v            |                 |
|.......            |                 |
|.......            |                 |
|.......            |                 |
|^.....<            |                 |

## Requisitos
É necessário ter o compilador de C/C++ instalado em seu computador.

### Execução
Basta compilar os arquivos contidos neste repositório e executá-los.
