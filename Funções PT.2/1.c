#include <stdio.h>
#include <stdlib.h>

void imprimir_opcoes() {
    printf("a) Opção: a vista com 10%% de desconto\n");
    printf("b) Opção: em duas vezes (preço da etiqueta)\n");
    printf("c) Opção: de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
}

int solicitar_opcao() {
    char opcao;
    printf("Digite a opção desejada: ");
    scanf(" %c", &opcao);
    return opcao;
}

void opcao_escolhida(int opcao) {
    float valor, total_parcelas;
    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 'a':
            total_parcelas = valor * 0.9;
            printf("Valor total das prestações: %.2f\n", total_parcelas);
            break;
        case 'b':
            total_parcelas = valor;
            printf("Valor total das prestações: %.2f\n", total_parcelas);
            break;
        case 'c':
            total_parcelas = valor * 1.03;
            printf("Valor total das prestações: %.2f\n", total_parcelas);
            break;
        default:
            printf("Opção inválida.\n");
    }
}

main() {
    int opcao;
    imprimir_opcoes();
    opcao = solicitar_opcao();
    opcao_escolhida(opcao);
}