#include<stdio.h>

main() {
   
    int codigoItem, quantidade, ;
    float valorTotal;

    printf("Digite o código do item (100 a 104): ");
    scanf("%d", &codigoItem);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigoItem){
        case 100:
            valorTotal = 10.10 * quantidade;
            break;
        case 101:
            valorTotal = 8.30 * quantidade;
            break;
        case 102:
            valorTotal = 8.50 * quantidade;
            break;
        case 103:
            valorTotal = 12.50 * quantidade;
            break;
        case 104:
            valorTotal = 13.25 * quantidade;
            break;
        default:
            printf("Código do item inválido.\n");
    }

    printf("Valor total a ser pago: R$ %.2lf\n", valorTotal);
}