#include<stdio.h>

main() {

    int opcao, quantidade;
    float totalCompra, preco, subtotal;

    printf("Bem-vindo à loja de frutas!\n");

    while(1){ 
        printf("\nMenu de frutas:\n");
        printf("1 - Abacaxi (R$ 5,00 a unidade)\n");
        printf("2 - Maçã (R$ 1,00 a unidade)\n");
        printf("3 - Pera (R$ 4,00 a unidade)\n");
        printf("4 - Finalizar compra\n");
        printf("Escolha uma opção (1 a 4): ");
        scanf("%d", &opcao);

        if(opcao == 4){
            break;
        }
        if(opcao < 1 || opcao > 3){
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            continue; 
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        switch (opcao) {
            case 1:
                preco = 5.00;
                break;
            case 2:
                preco = 1.00;
                break;
            case 3:
                preco = 4.00;
                break;
        }

        subtotal = preco * quantidade;
        totalCompra += subtotal;
        printf("Subtotal: R$ %.2lf\n", subtotal);
    }

    printf("Valor total da compra: R$ %.2lf\n", totalCompra);
    printf("Obrigado por comprar conosco!\n");
}