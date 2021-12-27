#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void teste()
{
    printf("TESTE!!\n\n");
}

void fillMatrix(char matrix[10][10], char x, char y, char character)
{
    for (char i = 0; i < x; i++)
    {
        for (char j = 0; j < y; j++)
        {
            matrix[i][j] = character;
        }
    }
}

void fillRandomMatrix(char matrix[10][10], char x, char y, char character)
{
    char random;

    for (char i = 0; i < x; i++)
    {
        srand(time(NULL));

        for (char j = 0; j < y; j++)
        {

            random = rand();

            if (random & 1)
                matrix[i][j] = '0';
            else
                matrix[i][j] = character;
        }
    }
}

void drawMatrix(char matrix[10][10])
{
    for (char i = 0; i < 10; i++)
    {
        for (char j = 0; j < 10; j++)
        {
            printf("  _ ");
        }

        printf("\n");

        for (char j = 0; j < 10; j++)
        {
            printf("| %c ", matrix[i][j]);
        }
        printf("|");
        printf("\n");
    }
}