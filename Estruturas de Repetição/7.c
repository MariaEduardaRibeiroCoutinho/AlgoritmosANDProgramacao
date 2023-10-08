#include<stdio.h>

main() {

    int idade, sexo, olhos, cabelos, totalHabitantes, totalMulheresCastanhas;
    float salario, porcentagemMulheresCastanhas, ;

    printf("Cadastro de habitantes (Digite -1 na idade para encerrar):\n");

    while(1){
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        if(sexo == 'm' || sexo == 'f') {
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);
            if(olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p'){
                printf("Cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &cabelos);
            if(cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r'){
                printf("Idade (entre 10 e 100): ");
                scanf("%d", &idade);
                if(idade >= 10 && idade <= 100){
                    printf("Salário (não negativo): ");
                    scanf("%lf", &salario);
                    if(salario >= 0){
                    totalHabitantes++;
            if(sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c'){
                totalMulheresCastanhas++;
            }
            }else{
                printf("Salário negativo não é permitido. Tente novamente.\n");
            }
            }else{
                printf("Idade fora do intervalo permitido. Tente novamente.\n");
            }
            }else{
                printf("Cor dos cabelos inválida. Tente novamente.\n");
            }
            }else{
                printf("Cor dos olhos inválida. Tente novamente.\n");
            }
            }else{
            printf("Sexo inválido. Tente novamente.\n");
            }
            if(idade == -1){
            break;
            }
    }

    if(totalHabitantes > 0){
        porcentagemMulheresCastanhas = (float)totalMulheresCastanhas / totalHabitantes * 100;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos e cabelos castanhos: %.2lf%%\n", porcentagemMulheresCastanhas);
    }else{
        printf("Nenhum habitante cadastrado.\n");
    }
}