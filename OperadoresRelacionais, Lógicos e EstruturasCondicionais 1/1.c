#include<stdio.h>
#include<math.h>

main() {
   
    int num, raizQuadrada, quadrado, numero;

    printf("Digite um número: ");
    scanf("%lf", &num);

    if(numero >= 0){
        raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2lf é %.2lf\n", num, raizQuadrada);
    }else{
        quadrado = numero * numero;
        printf("O quadrado de %.2lf é %.2lf\n", num, quadrado);
    }
}