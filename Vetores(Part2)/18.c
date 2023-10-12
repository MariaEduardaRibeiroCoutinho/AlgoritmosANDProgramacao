#include<stdio.h>

main() {

    int vetor[10], x, contador = 0;

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro x: ");
    scanf("%d", &x);

    printf("Múltiplos de %d no vetor: ", x);
    for(int i = 0; i < 10; i++){
        if(vetor[i] % x == 0){
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    if(contador == 0){
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", x);
    }else{
        printf("\nTotal de múltiplos de %d encontrados: %d\n", x, contador);
    }
}
