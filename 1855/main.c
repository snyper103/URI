#include <stdio.h>
#include <stdlib.h>

char** CriaMatriz(const int linha, const int coluna)
{
    int i;
    char** mat = (char**)malloc(linha * sizeof(char*));

    for(i = 0; i < linha; ++i)
        mat[i] = (char*)malloc(coluna * sizeof(char));

    return mat;
}
void InsereMatriz(char** mat, const int linha, const int coluna)
{
    int i, j;

    for(i = 0; i < linha; ++i)
        for(j = 0; j < coluna; ++j)
            scanf(" %c", &mat[i][j]);
}

short EscolheDirecao(char** mat, const int coluna, const int linha, char direcao, int i, int j);

short VerificaMapa(const int largura, const int altura)
{
    int j = 0, i = 0;
    char** matriz = CriaMatriz(altura, largura), direcao;
    short bol;

    InsereMatriz(matriz, altura, largura);

    if((matriz[i][j] != '>') && (matriz[i][j] != 'v') && (matriz[i][j] != '*'))
        return 0;

    direcao = matriz[i][j];
    matriz[i][j] = '0';
    bol = EscolheDirecao(matriz, largura, altura, direcao, i, j);

    free(matriz);

    return bol;
}

short AndaDireita(char** mat, const int coluna, const int linha, int i, int j)
{
    char direcao;
    short bol = 0;

    for(++j; j < coluna; j %= coluna)
    {
        if(mat[i][j] == '0')
            return 0;

        else
        {
            if(mat[i][j] != '.')
            {
                direcao = mat[i][j];
                mat[i][j] = '0';
                bol = EscolheDirecao(mat, coluna, linha, direcao, i, j);
                break;
            }

            else
            {
                mat[i][j] = '0';
                ++j;
            }
        }
    }

    return bol;
}
short AndaEsquerda(char** mat, const int coluna, const int linha, int i, int j)
{
    char direcao;
    short bol = 0;

    for(--j; j >= 0; (j < 0) ? (j = coluna - 1) : (j = j))
    {
        if(mat[i][j] == '0')
            return 0;

        else
        {
            if(mat[i][j] != '.')
            {
                direcao = mat[i][j];
                mat[i][j] = '0';
                bol = EscolheDirecao(mat, coluna, linha, direcao, i, j);
                break;
            }

            else
            {
                mat[i][j] = '0';
                --j;
            }
        }
    }

    return bol;
}
short AndaBaixo(char** mat, const int coluna, const int linha, int i, int j)
{
    char direcao;
    short bol = 0;

    for(++i; i < linha; i %= coluna)
    {
        if(mat[i][j] == '0')
            return 0;

        else
        {
            if(mat[i][j] != '.')
            {
                direcao = mat[i][j];
                mat[i][j] = '0';
                bol = EscolheDirecao(mat, coluna, linha, direcao, i, j);
                break;
            }

            else
            {
                mat[i][j] = '0';
                ++i;
            }
        }
    }

    return bol;
}
short AndaCima(char** mat, const int coluna, const int linha, int i, int j)
{
    char direcao;
    short bol = 0;

    for(--i; i >= 0; (i < 0) ? (i = coluna - 1) : (i = i))
    {
        if(mat[i][j] == '0')
            return 0;

        else
        {
            if(mat[i][j] != '.')
            {
                direcao = mat[i][j];
                mat[i][j] = '0';
                bol = EscolheDirecao(mat, coluna, linha, direcao, i, j);
                break;
            }

            else
            {
                mat[i][j] = '0';
                --i;
            }
        }
    }

    return bol;
}

short EscolheDirecao(char** mat, const int coluna, const int linha, char direcao, int i, int j)
{
    short bol = 0;

    switch(direcao)
    {
        case '>':
            bol = AndaDireita(mat, coluna, linha, i, j);
            break;

        case '<':
            bol = AndaEsquerda(mat, coluna, linha, i, j);
            break;

        case 'v':
            bol = AndaBaixo(mat, coluna, linha, i, j);
            break;

        case '^':
            bol = AndaCima(mat, coluna, linha, i, j);
            break;

        default:
            return bol = 1;
    }

    return bol;
}

int main()
{
    int largura, altura;

    scanf(" %i %i", &largura, &altura);

    printf("%c\n", (VerificaMapa(largura, altura)) ? ('*') : ('!'));

    return 0;
}
