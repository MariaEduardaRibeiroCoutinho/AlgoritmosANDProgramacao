#include<stdio.h>

main() {

    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Elementos primos e suas posições no vetor:\n");
    for(int i = 0; i < 10; i++){
        if((vetor[i])){
            printf("Elemento: %d, Posição: %d\n", vetor[i], i);
        }
    }
}
