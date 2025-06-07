#include<stdio.h>

//Movimentação Torre
void torre ( int movimento) {

    if (movimento > 0)
    {
        printf("Torre para Direita!\n");
        torre (movimento - 1);
    }
}

//Movimentação Bispo
void bispo ( int movimentob) {

   int bispo = 1;

    while (bispo--)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Bispo Horizontal \n");
        }
        printf("Bispo Vertical\n");
    }
}

//Movimentação Rainha
void rainha ( int movimentoc) {

    if (movimentoc > 0)
    {
        printf("Rainha para Direita!\n");
        rainha (movimentoc - 1);
    }
}
//Movimentação Cavalo
void cavalo ( int movimentod) {
    int cavalo = 1;

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo para cima \n");
        }
        printf("Cavalo para direita");
    }
   
}

int main (){

    torre(5);
    printf("\n");
    bispo(5);
    printf("\n");
    rainha(8);
    printf("\n");
    cavalo(1);

    return 0;

}