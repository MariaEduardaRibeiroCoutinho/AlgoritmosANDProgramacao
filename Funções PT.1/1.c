#include<stdio.h>

int maiorNumero(int num1, int num2) {
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

main(){
    
    int numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = maiorNumero(numero1, numero2);
    printf("O maior número é: %d\n", resultado);
}