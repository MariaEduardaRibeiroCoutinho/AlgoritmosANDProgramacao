#include<stdio.h>

main() {

    int escolhaPrato, escolhaSobremesa, escolhaBebida;
    float totalCalorias = 0.0;

    printf("Escolha o prato (1 a 4):\n");
    printf("1 - Vegetariano\n");
    printf("2 - Peixe\n");
    printf("3 - Frango\n");
    printf("4 - Carne\n");
    scanf("%d", &escolhaPrato);

    printf("Escolha a sobremesa (1 a 4):\n");
    printf("1 - Abacaxi\n");
    printf("2 - Sorvete Diet\n");
    printf("3 - Mouse Diet\n");
    printf("4 - Mouse Chocolate\n");
    scanf("%d", &escolhaSobremesa);

    printf("Escolha a bebida (1 a 4):\n");
    printf("1 - Chá\n");
    printf("2 - Suco de laranja\n");
    printf("3 - Suco de melão\n");
    printf("4 - Refrigerante Diet\n");
    scanf("%d", &escolhaBebida);

    switch(escolhaPrato){
        case 1:
            totalCalorias += 180.0;
            break;
        case 2:
            totalCalorias += 230.0;
            break;
        case 3:
            totalCalorias += 250.0;
            break;
        case 4:
            totalCalorias += 350.0;
            break;
        default:
            printf("Escolha de prato inválida.\n");
    }

    switch(escolhaSobremesa){
        case 1:
            totalCalorias += 75.0;
            break;
        case 2:
            totalCalorias += 110.0;
            break;
        case 3:
            totalCalorias += 170.0;
            break;
        case 4:
            totalCalorias += 200.0;
            break;
        default:
            printf("Escolha de sobremesa inválida.\n");
    }

    switch(escolhaBebida){
        case 1:
            totalCalorias += 20.0;
            break;
        case 2:
            totalCalorias += 70.0;
            break;
        case 3:
            totalCalorias += 100.0;
            break;
        case 4:
            totalCalorias += 65.0;
            break;
        default:
            printf("Escolha de bebida inválida.\n");
    }

    printf("Total de calorias da refeição: %.2lf calorias\n", totalCalorias);
}