#include<stdio.h>

main() {

    int vetorX[5], vetorY[5], produtoEscalar;

    printf("Digite 5 números reais para o primeiro conjunto (vetorX):\n");
    for(int i = 0; i < 5; i++){
        scanf("%lf", &vetorX[i]);
    }


    printf("Digite 5 números reais para o segundo conjunto (vetorY):\n");
    for(int i = 0; i < 5; i++){
        scanf("%lf", &vetorY[i]);
    }

    for(int i = 0; i < 5; i++){
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("Primeiro conjunto (vetorX):\n");
    for(int i = 0; i < 5; i++){
        printf("%.2lf ", vetorX[i]);
    }

    printf("Segundo conjunto (vetorY):\n");
    for(int i = 0; i < 5; i++){
        printf("%.2lf ", vetorY[i]);
    }

    printf("Produto escalar: %.2lf\n", produtoEscalar);
}
