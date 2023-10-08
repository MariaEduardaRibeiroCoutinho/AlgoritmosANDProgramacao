#include<stdio.h>

main() {

    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    if(N <= 0){
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    printf("Os primeiros %d números naturais ímpares:\n", N);
    for(int i = 1; N > 0; i += 2){
        printf("%d\n", i);
        N--;
    }
}