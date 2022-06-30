#include <cstdio>
#include <cstdlib>

int main ( void )
{
    char strAlfabeto[27];
    int* vet, n;

    while ( (scanf(" %[^\n]s", strAlfabeto)) != EOF)
    {
        scanf(" %i", &n);

        vet = (int*)malloc(n*sizeof(int));
        
        for ( register int i = 0; i < n; ++i )
            scanf(" %i", &vet[i]);
        
        for ( register int i = 0; i < n; ++i )
            printf("%c", strAlfabeto[vet[i]-1]);

        printf("\n");

        free(vet);
    }

    return 0;
}
