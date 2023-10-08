#include<stdio.h>

main() {

    int A, B, C;

    printf("Digite os valores de A, B e C (separados por espaços): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    
    if(A + B > C && A + C > B && B + C > A){
        if(A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A){
            printf("É um triângulo retângulo.\n");
        }else if(A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A){
            printf("É um triângulo obtusângulo.\n");
        }else{
            printf("É um triângulo acutângulo.\n");
        }
    }else{
        printf("Não é possível formar um triângulo com esses lados.\n");
    }
}

