#include <stdio.h>
#include <stdlib.h>
#define SIZE 501

int DescobreSize(const char* StrVar)
{
    register int i;

    for(i = 0; StrVar[i] != '\0'; ++i);

    return i;
}
short int VerificaStr(const char* StrVar1, const char* StrVar2)
{
    register int i, j;
    short int boleano;
    char aux[] = {'B', 'N', '*', '\0'};

    if((DescobreSize(StrVar1)) != (DescobreSize(StrVar2)))
        return 0;

    for(i = 0; StrVar1[i] != '\0'; ++i)
    {
        for(j = 0; aux[j] != '\0'; ++j)
        {
            if(StrVar1[i] != aux[j])
                boleano = 1;

            else
            {
                boleano = 0;
                break;
            }
        }

        if(boleano == 1)
            return 0;
    }

    for(i = 0; StrVar2[i] != '\0'; ++i)
    {
        for(j = 0; aux[j] != '\0'; ++j)
        {
            if(StrVar2[i] != aux[j])
                boleano = 1;

            else
            {
                boleano = 0;
                break;
            }
        }

        if(boleano == 1)
            return 0;
    }

    return 1;
}
int ContaJogadas(char* StrVar1, const char* StrVar2)
{
    register int i;
    int count;

    if(StrVar1[0] != StrVar2[0])
    {
        for(i = 0, count = 0; StrVar1[i] != '\0'; ++i)
        {
            if((StrVar1[i] == StrVar2[i]) && ((StrVar1[i + 1] != StrVar2[i + 1]) || (StrVar1[i + 1] == '\0')))
                ++count;

            if((StrVar1[i] != StrVar2[i]) && (StrVar1[i + 1] == '\0'))
                ++count;

        }
    }


    else
    {
        for(i = 0, count = 0; StrVar1[i] != '\0'; ++i)
            if((StrVar1[i] != StrVar2[i]) && ((StrVar1[i + 1] == StrVar2[i + 1]) || (StrVar1[i + 1] == '\0')))
                ++count;
    }


    return count;
}

int main()
{
    char S[SIZE], T[SIZE];

    scanf(" %s %s", S, T);

    while((S[0] != '*') || (T[0] != '*'))
    {
        if(!(VerificaStr(S, T)))
            break;

        printf("%i\n", ContaJogadas(S, T));

        scanf(" %s %s", S, T);
    }

    return 0;
}
