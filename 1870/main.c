#include <stdio.h>
#include <stdlib.h>

char *TesteBalao(int *linha, int coluna, int *posicao, int *vet[9])
{
    int i = 0, j = 0, l = 0, aux = 0;

    for(; l < *linha; ++l)
    {
        for(i = *posicao - 1; i > -1; --i)
        {
            if(vet[l][i] != 0)
                break;
        }

        for(j = *posicao - 1; j < coluna; ++j)
        {
            if(vet[l][j] != 0)
                break;
        }

        *posicao += (vet[l][i] - vet[l][j]);
        aux = *posicao - 1;

        if(vet[l][aux] != 0)
        {
            *linha = l + 1;
            return "BOOM";
        }
    }

    return "OUT";
}

int** AlocarMatriz(int Linhas,int Colunas)
{
  int i = 0, j = 0, **matriz;

  matriz = (int**)malloc(Linhas * sizeof(int*));

  for (; i < Linhas; ++i)
  {
       matriz[i] = (int*)malloc(Colunas * sizeof(int));

       for (; j < Colunas; ++j)
            matriz[i][j] = 0;
  }

    return matriz;
}

int main()
{
    int L = 0, C = 0, P = 0, i, j, **vet, aux = 0;
    char *teste;

    scanf("%i %i %i", &L, &C, &P);
    vet = AlocarMatriz(L, C);

    for(i = 0; i < L; ++i)
        for(j = 0; j < C; ++j)
        {
            scanf("%i", &aux);
            vet[i][j] = aux;
        }

    while( !((L == C) && (C == P) && (P == 0)) )
    {
        teste = TesteBalao(&L, C, &P, vet);

        if(teste[0] == 'O')
            printf("%s %i\n", teste, P);

        else
            printf("%s %i %i\n", teste, L, P);

        free(vet);
        scanf("%i %i %i", &L, &C, &P);
        vet = AlocarMatriz(L, C);

        for(i = 0; i < L; ++i)
            for(j = 0; j < C; ++j)
            {
                scanf("%i", &aux);
                vet[i][j] = aux;
            }
    }

    free(vet);

    return 0;
}
