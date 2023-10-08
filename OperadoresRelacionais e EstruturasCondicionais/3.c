#include<stdio.h>

main() {
    
    float altura;

    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);

    if(altura > 1.80){
        printf("A altura é maior do que 1.80 metros.\n");
    }else{
        printf("A altura é igual ou menor do que 1.80 metros.\n");
    }
}