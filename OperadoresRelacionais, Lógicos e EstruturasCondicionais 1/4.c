#include<stdio.h>

main() {

    int A, B, C, temp;

    printf("Digite o valor A: ");
    scanf("%lf", &A);

    printf("Digite o valor B: ");
    scanf("%lf", &B);

    printf("Digite o valor C: ");
    scanf("%lf", &C);

    if(A < B){
        temp = A;
        A = B;
        B = temp;
    }
    if(B < C){
        temp = B;
        B = C;
        C = temp;
    }
    if(A < B){
        temp = A;
        A = B;
        B = temp;
    }

    printf("Valores em ordem descendente: %.2lf, %.2lf, %.2lf\n", A, B, C);
}