# 1300 - Horas e Minutos
Heidi tem um relógio analógico discreto com a forma de um círculo, como o mostrado na figura ao lado. Dois ponteiros giram em torno do centro do círculo, indicando as horas e minutos. O relógio tem 60 marcas colocadas em torno do seu perímetro, com a distância entre cada uma das marcas consecutivas sendo constante.

O ponteiro dos minutos se move de sua marca atual para o próximo exatamente uma vez a cada minuto. Por sua vez, o ponteiro das horas se move de sua marca atual para a próxima exatamente uma vez a cada 12 minutos, de modo que avança cinco marcas a cada hora.

Consideramos que os dois ponteiros movem-se discretamente e instantaneamente, o que significa que eles estão sempre posicionados exatamente sobre uma das marcas e nunca entre as marcas.

À meia-noite ambos os ponteiros alcançam ao mesmo tempo a marca no topo, o que indica zero horas e zero minutos. Após exatamente 12 horas ou 720 minutos, ambos os ponteiros alcançam a mesma posição novamente, e este processo é repetido várias vezes. Note que quando o ponteiro dos minutos se move, o ponteiro das horas pode não se mover, no entanto, quando o ponteiro das horas se move, o ponteiro dos minutos também se move.

Heidi gosta de geometria, e ela gosta de medir o ângulo mínimo entre os dois ponteiros do relógio em diferentes momentos do dia. Ela tem anotado algumas medidas, mas depois de vários anos e uma longa lista, ela notou que alguns ângulos se repetiam enquanto alguns outros nunca apareciam. Por exemplo, a lista de Heidi indica que tanto às três horas quanto às nove horas o ângulo mínimo entre os dois ponteiros é de 90 graus, enquanto um ângulo de 65 graus não aparece na lista. Heidi decidiu verificar, para qualquer número inteiro A entre 0 e 180, se existe pelo menos uma vez no dia um ângulo mínimo entre os dois ponteiros do relógio com exatamente A graus. Ajude Heide com um programa que responda a esta pergunta.

#### Entrada
Cada caso de teste é descrito usando uma única linha. A linha contém um número inteiro A (0 ≤ A ≤ 180) que representa o ângulo a ser verificado.

#### Saída
Para cada caso de teste uma linha contendo um caracter. Se existe pelo menos uma hora do dia de tal forma que o ângulo mínimo entre os dois ponteiros com exatamente A graus, então escreva a letra maiúscula 'Y'. Caso contrário escreva a letra maiúscula 'N'.

|Exemplo de Entrada|Exemplo de Saída|
|------------------|----------------|
|90                |Y               |
|65                |N               |
|66                |Y               |
|67                |N               |
|128               |N               |
|0                 |Y               |
|180               |Y               |

## Requsitos
É necessário ter ter o compilador de C/C++ intalado em seu computador.

### Execução
Basta compilar os arquivos contidos neste repositório e executá-los.
