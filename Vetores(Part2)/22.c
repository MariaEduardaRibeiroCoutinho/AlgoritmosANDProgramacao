#include<stdio.h>

main() {

    int vetor1[10], vetor2[10], vetor3[10];

    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 números inteiros para o segundo vetor:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor2[i]);
    }

    for(int i = 0; i < 10; i++){
        vetor3[2 * i] = vetor1[i];      
        vetor3[2 * i + 1] = vetor2[i];  
    }

    printf("Vetor resultante (pares de vetor1 e ímpares de vetor2):\n");
    for(int i = 0; i < 20; i++){
        printf("%d ", vetor3[i]);
    }
}
