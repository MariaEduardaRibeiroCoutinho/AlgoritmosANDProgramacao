#include<stdio.h>

main() {

    int N;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if(N < 0){
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    printf("Números naturais de %d até 0 (ordem crescente):\n", N);
    for(int i = 0; i <= N; i++){
        printf("%d\n", i);
    }
}