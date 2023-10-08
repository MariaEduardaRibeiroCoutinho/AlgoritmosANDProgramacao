#include<stdio.h>

main() {
    
    float salarioAtual, percentualReajuste, novoSalario, percentualReajuste;

    printf("Digite o salário mensal atual do funcionário: R$ ");
    scanf("%lf", &salarioAtual);

    printf("Digite o percentual de reajuste (em porcentagem): ");
    scanf("%lf", &percentualReajuste);

    novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100.0));

    printf("O novo salário do funcionário é: R$ %.2lf\n", novoSalario);
}