#include<stdio.h>

main() {
    
    float peso;

    printf("Digite o peso em kg: ");
    scanf("%lf", &peso);

    if(peso < 60.0){
        printf("O peso é menor do que 60 kg.\n");
    }else{
        printf("O peso é igual ou maior do que 60 kg.\n");
    }
}