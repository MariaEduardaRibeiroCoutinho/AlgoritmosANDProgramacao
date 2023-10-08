#include<stdio.h>

main() {
    
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%lf", &valorVendas);

    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%lf", &salarioFixo);

    printf("Digite o valor por carro vendido: R$ ");
    scanf("%lf", &valorPorCarro);

    salarioFinal = salarioFixo + (numCarrosVendidos * valorPorCarro) + (0.05 * valorVendas);

    printf("O salário final do vendedor é: R$ %.2lf\n", salarioFinal);
}