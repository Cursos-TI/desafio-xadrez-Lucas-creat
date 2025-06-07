#include <stdio.h>

int main()
{

    //Movimento Bispo
    
    int i = 0;

    do
    {

        printf("Bispo para esquerda, cima\n");
        i++;

    } while (i <= 5);

    printf("\n");

    //Movimento Rainha

    int j = 0;

    for (j = 0; j <= 8; j++)
    {
        printf("Rainha para Direita\n");
    }

    printf("\n");
    
    // Movimento Torre

    int k = 0;

    while (k <= 5)
    {
        if (k != 5)
        {
            printf("Torre para Direita\n");
        }
        k++;
    }
}