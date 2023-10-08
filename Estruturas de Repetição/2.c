#include<stdio.h>

main() {

    int N;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if(N < 0){
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    printf("Números naturais de %d até 0 (ordem decrescente):\n", N);
    for(int i = N; i >= 0; i--){
        printf("%d\n", i);
    }
}