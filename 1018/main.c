#include <stdlib.h>

long* ContaCedulas(long vlr)
{
    long* cedulas = (long*)malloc(sizeof(long) * 7);
    const int aux[] = {100, 50, 20, 10, 5, 2, 1};
    register int i;

    for(i = 0; i < 7; ++i)
        cedulas[i] = 0;

    for(i = 0; i < 7;)
    {
        if(vlr >= aux[i])
        {
            ++cedulas[i];
            vlr -= aux[i];
        }

        else
            ++i;
    }

    return cedulas;
}

int main()
{
    long vlr,* cedulas;

    scanf(" %li", &vlr);

    cedulas = ContaCedulas(vlr);

    printf("%li\n"
           "%li nota(s) de R$ 100,00\n"
           "%li nota(s) de R$ 50,00\n"
           "%li nota(s) de R$ 20,00\n"
           "%li nota(s) de R$ 10,00\n"
           "%li nota(s) de R$ 5,00\n"
           "%li nota(s) de R$ 2,00\n"
           "%li nota(s) de R$ 1,00\n", vlr, cedulas[0], cedulas[1], cedulas[2], cedulas[3], cedulas[4], cedulas[5], cedulas[6]);

    return 0;
}
