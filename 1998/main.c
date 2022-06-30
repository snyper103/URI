#include <stdio.h>
#include <stdlib.h>

int* CriaVetor(const int size)
{
    return (int*)malloc(size * sizeof(int));
}
short int InsereVet(int* vet, const int size)
{
    register int i;
    short int boleano;

    for(boleano = 1, i = 0; i < size; ++i)
    {
        scanf(" %i", &vet[i]);

        if((vet[i] < 0) || (vet[i] > 500))
        {
            boleano = 0;
            break;
        }
    }

    return boleano;
}

int EncontraCaixa(const int* vet, const int size)
{
    register int i;

    for(i = 0; i < size; ++i)
        if(vet[i] == i + 1)
            return i;

    return -1;
}
void FazJogada(int* vet, const int indice)
{
    register int i;

    vet[indice] = 0;

    for(i = 0; i < indice; ++i)
        ++vet[i];
}
short int VerificaVitoria(const int* vet, const int size)
{
    register int i, j;

    for(i = 0, j = 0; i < size; ++i)
        if(vet[i] == 0)
            ++j;

    return (j == size) ? (1) : (0);
}

int main()
{
    int N = 0,* vet;
    register int i;
    short int boleano;

    while(N != -1)
    {
        scanf(" %i", &N);

        if((N >= 1) && (N <= 500))
        {
            vet = CriaVetor(N);

            boleano = InsereVet(vet, N);

            if(boleano == 1)
            {
                for(i = EncontraCaixa(vet, N); i != -1; FazJogada(vet, i), i = EncontraCaixa(vet, N));

                printf("%c\n", (VerificaVitoria(vet, N)) ? ('S') : ('N'));
            }

            else
                break;
        }

        else
            break;

        free(vet);
    }

    return 0;
}
