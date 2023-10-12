#include<stdio.h>

main() {

    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    printf("Vetor resultante:\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
}
