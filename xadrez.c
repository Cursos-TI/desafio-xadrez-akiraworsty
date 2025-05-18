#include <stdio.h> 

int main(){

    //definicao de constantes

    #define mov_torre 5
    #define mov_bispo 5
    #define mov_rainha 8






    //Movimentacao da torre
    //5 casas para a direita

    printf("Movimentacao da Torre\n");

    for(int a = 0; a < mov_torre; a++) {
         printf("Direita\n"); //Imprime direcao do mov.
    }

    printf("---------\n");
    printf("---------\n");

    printf("Movimentacao do Bispo\n");

    //Movimentacao do Bispo
    //5 casas na diagonal para cima e para a direita.
    
    int b = 0;
    while(b <mov_bispo) {
        printf("Direita, Cima\n"); //Imprime direcao do mov.
        b++;

    }

    printf("---------\n");
    printf("---------\n");

    printf("Movimentacao da Rainha\n");

    //Movimentacao da Rainha
    //Move-se 8 casas para a direita

    int c = 0;
    do
    { printf("Direita\n");
        c++;
        
    } while (c <mov_rainha);
    




    return 0;
}












