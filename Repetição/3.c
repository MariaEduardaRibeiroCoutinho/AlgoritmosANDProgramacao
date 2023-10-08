#include<stdio.h>

main() {

    int n, termoAnterior = 0, termoAtual = 1, proximoTermo;

    printf("Digite um número inteiro (n >= 0): ");
    scanf("%d", &n);

    if(n == 0){
        printf("O termo %d da sequência de Fibonacci é: 0\n", n);
    }else if(n == 1){
        printf("O termo %d da sequência de Fibonacci é: 1\n", n);
    }else{
        for(int i = 2; i <= n; i++){
            proximoTermo = termoAnterior + termoAtual;
            termoAnterior = termoAtual;
            termoAtual = proximoTermo;
        }
        printf("O termo %d da sequência de Fibonacci é: %d\n", n, termoAtual);
    }
}