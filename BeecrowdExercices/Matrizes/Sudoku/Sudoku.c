#include <stdio.h>

int verificarLinha(int sudoku[9][9], int linha)
{
    int vistos[10] = {0};

    for (int j = 0; j < 9; j++)
    {
        int num = sudoku[linha][j];

        if (num < 1 || num > 9 || vistos[num])
            return 0;

        vistos[num] = 1;
    }

    return 1;
}

int verificarColuna(int sudoku[9][9], int coluna)
{
    int vistos[10] = {0};

    for (int i = 0; i < 9; i++)
    {
        int num = sudoku[i][coluna];

        if (num < 1 || num > 9 || vistos[num])
            return 0;

        vistos[num] = 1;
    }

    return 1;
}

int verificarBloco(int sudoku[9][9], int linhaInicial, int colunaInicial)
{
    int vistos[10] = {0};

    for (int i = linhaInicial; i < linhaInicial + 3; i++)
    {
        for (int j = colunaInicial; j < colunaInicial + 3; j++)
        {
            int num = sudoku[i][j];

            if (num < 1 || num > 9 || vistos[num])
                return 0;

            vistos[num] = 1;
        }
    }

    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int caso = 1; caso <= N; caso++)
    {
        int sudoku[9][9];
        int valido = 1;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &sudoku[i][j]);
            }
        }

        for (int i = 0; i < 9 && valido; i++)
        {
            if (!verificarLinha(sudoku, i))
                valido = 0;
        }

        for (int j = 0; j < 9 && valido; j++)
        {
            if (!verificarColuna(sudoku, j))
                valido = 0;
        }

        for (int i = 0; i < 9 && valido; i += 3)
        {
            for (int j = 0; j < 9 && valido; j += 3)
            {
                if (!verificarBloco(sudoku, i, j))
                    valido = 0;
            }
        }

        printf("Instancia %d\n", caso);

        if (valido)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}