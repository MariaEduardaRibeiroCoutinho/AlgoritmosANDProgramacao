#include<stdio.h>

main() {

    int vetorA[10], vetorB[10], vetorC[10];

    printf("Digite 10 números inteiros para o vetor A:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 10 números inteiros para o vetor B:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetorB[i]);
    }

    for(int i = 0; i < 10; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    printf("Vetor C (A - B):\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetorC[i]);
    }
}
