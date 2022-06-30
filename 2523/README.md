# 2523 - A Mensagem de Will
Ao voltar de um intenso jogo de RPG na casa de um amigo, o jovem Will desapareceu misteriosamente! Todos estão desesperadamente procurando por ele por todos os cantos. Enquanto isso, coisas estranhas estão acontecendo em sua casa. Uma delas, entretanto, lhe permite comunicar-se com o garoto!

Há exatamente 26 lâmpadas penduradas na parede da sua sala, numeradas de 1 a 26 da esquerda para a direita. Além disso, há uma letra do alfabeto pintada na parede em baixo de cada lâmpada. Quando Will quer lhe enviar uma mensagem, ele irá (misteriosamente) piscar, uma a uma, as lâmpadas correspondentes a cada letra de sua mensagem. Por exemplo, se ele quer enviar a mensagem HELP, ele irá piscar, nesta ordem, as lâmpadas acima das letras H, E, L e P.

Dada a letra associada a cada lâmpada e a ordem das lâmpadas que foram piscadas por Will, decifre a mensagem que ele enviou!

#### Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém uma string de exatamente 26 letras maiúsculas contendo todas as letras do alfabeto inglês. A primeira letra da string está associada à lâmpada 1; a segunda letra está associada à lâmpada 2; e assim por diante. A próxima linha contém um inteiro N (1 ≤ N ≤ 104), o número de lâmpadas que foram piscadas. A terceira linha contém N inteiros li (1 ≤ li ≤ 26), indicando as lâmpadas que foram piscadas, em ordem.

A entrada termina com fim-de-arquivo (EOF).

#### Saída
Para cada caso de teste, imprima uma única linha contendo a mensagem enviada por Will.

|Exemplo de Entrada        |Exemplo de Saída|
|--------------------------|----------------|
|ABCDEFGHIJKLMNOPQRSTUVWXYZ|HELP            |
|4                         |HELLOWORLD      |
|8 5 12 16                 |                |
|QWERTYUIOPASDFGHJKLZXCVBNM|                |
|10                        |                |
|16 3 19 19 9 2 9 4 19 13  |                |

## Requisitos
É necessário ter o compilador de C/C++ instalado em seu computador.

### Execução
Basta compilar os arquivos contidos neste repositório e executá-los.
