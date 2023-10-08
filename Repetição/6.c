#include <stdio.h>

main() {

    int continuar, mes, ano, dias;
    
    do {

        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

        if(mes < 1 || mes > 12){
            printf("Mês inválido. Digite um número de 1 a 12.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if(ano < 1){
            printf("Ano inválido. Digite um ano maior que zero.\n");
            continue;
        }

        switch(mes){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dias = 31;
                break;
            case 4: case 6: case 9: case 11:
                dias = 30;
                break;
            case 2:
                if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
                    dias = 29;
                }else{
                    dias = 28;
                }
                break;
        }

        printf("O mês %d/%d tem %d dias.\n", mes, ano, dias);

        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar);

    }while(continuar == 'S' || continuar == 's');

}