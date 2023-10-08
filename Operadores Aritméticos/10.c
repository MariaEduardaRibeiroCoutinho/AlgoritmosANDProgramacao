#include<stdio.h>

  main() {
    
    float custoFabrica, custoConsumidor;

    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%lf", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

    printf("O custo final ao consumidor é: R$ %.2lf\n", custoConsumidor);
}