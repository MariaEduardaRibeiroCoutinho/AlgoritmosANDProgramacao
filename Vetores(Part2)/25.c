#include<stdio.h>

main() {
    
    int vetor[100], numero = 1, i = 0;

    while(i < 100){
        if(numero % 7 != 0 && numero % 10 != 7){
            vetor[i] = numero;
            i++;
        }

        numero++;
    }

    printf("Vetor com os 100 primeiros naturais não múltiplos de 7 ou que não terminam com 7:\n");
    for(i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
        if((i + 1) % 10 == 0){
            printf("\n"); 
        }
    }
}
