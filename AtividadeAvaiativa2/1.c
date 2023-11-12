#include<stdio.h>

int validaQuantidade() {
    int quantidade;
    do {
        printf("Informe a quantidade de peças fabricadas: ");
        scanf("%d", &quantidade);
    } while (quantidade < 0);
    return quantidade;
}

float calculaSalario(int quantidade) {
    const float salarioBase = 600.00, adicional1 = 0.50, adicional2 = 0.75;
    const int limite1 = 50, limite2 = 80;

    float adicionalProdutividade = 0.0;

    if (quantidade > limite1 && quantidade <= limite2) {
        adicionalProdutividade = (quantidade - limite1) * adicional1;
    } else if (quantidade > limite2) {
        adicionalProdutividade = (limite2 - limite1) * adicional1 + (quantidade - limite2) * adicional2;
    }

    return salarioBase + adicionalProdutividade;
}

void mostraFinal(float salario) {
    printf("Salário Total: R$ %.2f\n", salario);
    printf("--------------------\n");
}

main() {
    int quantidade;
    char continuar;

    do {
        printf("\nFuncionário:\n");
        quantidade = validaQuantidade();
        float salario = calculaSalario(quantidade);
        mostraFinal(salario);

        printf("Deseja calcular o salário para outro funcionário? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

}
