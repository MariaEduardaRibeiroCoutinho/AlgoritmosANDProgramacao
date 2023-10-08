#include<stdio.h>

main() {
    
   int A, B, C, D, maior, menor;
    
    printf("Digite o valor A: ");
    scanf("%lf", &A);

    printf("Digite o valor B: ");
    scanf("%lf", &B);

    printf("Digite o valor C: ");
    scanf("%lf", &C);

    printf("Digite o valor D: ");
    scanf("%lf", &D);

    maior = A;
    menor = A;

    if(B > maior){
        maior = B;
    }else if(B < menor){
        menor = B;
    }
    if(C > maior){
        maior = C;
    }else if(C < menor){
        menor = C;
    }
    if(D > maior){
        maior = D;
    }else if(D < menor){
        menor = D;
    }

    printf("O maior valor é: %.2lf\n", maior);
    printf("O menor valor é: %.2lf\n", menor);
}