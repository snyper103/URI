#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* criaVetor(const int size)
{
    return (int*)malloc(size*sizeof(int));
}

void leVetor(const int size, int* vet)
{
    register int i;

    for ( i = 0; i < size; ++i )
        scanf(" %i", &vet[i]);
}

char verificaPosibilidade(const int n, const int b, const int* vet)
{
    register int i, j, l;

    for ( l = 0; l <= n; ++l )
    {
        for ( i = 0; i < b; ++i )
        {
            for ( j = 0; j < b; ++j )
                if ( sqrt(pow(vet[i] - vet[j], 2)) == l)
                    break;

            if ( j < b )
                break;
        }

        if ( i == b )
            return 'N';
    }

    return 'Y';
}

int main()
{
    int* vet, n, b;

    scanf(" %i %i", &n, &b);

    vet = criaVetor(b);
    leVetor(b, vet);

    while ( (n != 0) && (b != 0) )
    {
        printf("%c\n", verificaPosibilidade(n, b, vet));

        free(vet);

        scanf(" %i %i", &n, &b);

        vet = criaVetor(b);
        leVetor(b, vet);
    }

    return 0;
}
