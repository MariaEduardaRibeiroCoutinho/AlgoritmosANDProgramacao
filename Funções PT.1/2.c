#include<stdio.h>
#include<string.h>

//prototipo da funcao
void mostraMes(int num);

main() {


}

void mostraMes(int num){
    int qtdDias;
    char nomeMes;
    switch(num){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: qtdDias = 31;
        if(num == 1){
            strcpy(nomeMes, "Janeiro");
        }else if(num == 3){
            strcpy(nomeMes, "Marco");
        }else if(num == 5){
            strcpy(nomeMes, "Maio"):
        }else if(num == 7){
            strcpy(nomeMes, "Julho");
        }else if(num == 8){
            strcpy(nomeMes, "Agosto"):
        }else if(num == 10){
            strcpy(nomeMes, "Outubro");
        }else if(num == 12){
            strcpy(nomeMes, "Dezembro");
        }
        break;
    case 4: case 6: case 9: case 11:
        qtdDias = 30;
        if(num == 4 ){
            strcpy(nomeMes, "Abril");
        }else if(num == 6){
            strcpy(nomeMes, "Junho");
        }else if(num == 9){
            strcpy(nomeMes, "Setembro"):
        }else if(num == 11){
            strcpy(nomeMes, "Novembro");
        }
        break;
        case 2:
            qtdDias = 28;
            strcpy(nomeMes, "Fevereiro");
        default:
            printf("Opcao invalida para mes");
    }
    printf("Quantidade de dias: %d e mes : %s", qtdDias, nomeMes);
}