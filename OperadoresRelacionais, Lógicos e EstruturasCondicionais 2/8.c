#include<stdio.h>

main() {
 
    int idade, tempoDeServico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempoDeServico);

    if((idade >= 65) || (tempoDeServico >= 30) || ((idade >= 60) && (tempoDeServico >= 25))){
        printf("O trabalhador pode se aposentar.\n");
    }else{
        printf("O trabalhador não pode se aposentar.\n");
    }
}