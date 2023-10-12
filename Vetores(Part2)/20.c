#include<stdio.h>

main() {

    int vetor1[10], vetor2[10], contador, numero; 

    for(int i = 0; i < 10; i++){
        do{
            printf("Digite um número inteiro no intervalo (0,50): ");
            scanf("%d", &numero);
        }while(numero < 0 || numero > 50);
        
        vetor1[i] = numero;

        if(numero % 2 != 0){
            vetor2[contador] = numero;
            contador++;
        }
    }

    printf("Vetor1:\n");
    for(int i = 0; i < 10; i++){
        printf("%2d ", vetor1[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    printf("\nVetor2 (Ímpares de Vetor1):\n");
    for(int i = 0; i < contador; i++){
        printf("%2d ", vetor2[i]);
        if((i + 1) % 2 == 0){
        }
    }
}
