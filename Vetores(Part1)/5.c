#include<stdio.h>

main() {

    int vetor[10], pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            printf("\nValor: %d", vetor[i]);
            pares++;
        }
    }
    printf("A quantidade de pares existentes no vetor e: %d", pares);
}