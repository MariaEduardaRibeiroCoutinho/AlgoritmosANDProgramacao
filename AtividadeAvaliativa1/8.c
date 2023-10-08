#include <stdio.h>

main() {

    int numFilhos, numPessoas, numFilhosTotal, numPessoasAte100;
    float salario, salarioTotal, maiorSalario, mediaSalario, mediaFilhos, percentualAte100;

    do{
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if(salario >= 0){
            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);
                salarioTotal += salario;
                numFilhosTotal += numFilhos;
                numPessoas++;
            if(salario > maiorSalario){
                maiorSalario = salario;
            }
            if(salario <= 100.0){
                numPessoasAte100++;
            }
        }
    }while(salario >= 0);
        if(numPessoas > 0){
        mediaSalario = salarioTotal / numPessoas;
        mediaFilhos = (float) numFilhosTotal / numPessoas;
        percentualAte100 = (float) numPessoasAte100 / numPessoas * 100.0;

        printf("Média do salário da população: %.2lf\n", mediaSalario);
        printf("Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("Maior salário: %.2lf\n", maiorSalario);
        printf("Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAte100);
    }else{
        printf("Nenhum dado foi inserido.\n");
    }
}
