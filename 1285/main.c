#include <stdio.h>
#include <stdlib.h>

short int VerificaIgualdade(int num)
{
    int size = 0, i = 0, j = 0, aux = 0, *vet;

    if((num > 0) && (num < 10))
        return 0;

    for(aux = num; aux > 0; ++size)
        aux /= 10;

    vet = (int*)malloc(sizeof(int) * size);

    for(i = size - 1; i > -1; --i, num /= 10)
    {
        aux = num - num / 10 * 10;
        vet[i] = aux;
    }

    aux = 0;

    for(i = 0; i < size - 1; ++i)
    {
        for(j = i + 1; j < size; ++j)
        {
            if(vet[i] == vet[j])
                aux = 1;
        }
    }

    free(vet);

    return (aux == 1) ? (1) : (0);
}

int main()
{
    int N = 0, M = 0, count = 0;
    short int boleano = 0;

    while((scanf("%i %i", &N, &M)) != EOF)
    {
        if((N < 1) && (N > M) && (M > 5000));

        else
        {
            for(count = 0; N <= M; ++N)
            {
                boleano = VerificaIgualdade(N);

                if(boleano == 0)
                    ++count;
            }

            printf("%i\n", count);
        }
    }

    return 0;
}
