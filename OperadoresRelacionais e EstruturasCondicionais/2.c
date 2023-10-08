#include<stdio.h>

main() {
   
    float salario, salarioMinimo = 1100.00;

    printf("Digite o salário: R$ ");
    scanf("%lf", &salario);

    if(salario > salarioMinimo){
        printf("A pessoa ganha mais do que o salário mínimo.\n");
    }else{
        printf("A pessoa ganha igual ou menos do que o salário mínimo.\n");
    }
}