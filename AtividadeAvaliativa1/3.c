#include<stdio.h>

main() {

    int A, B, C;

    printf("Digite os valores de A, B e C (separados por espaços): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    if(A + B > C && A + C > B && B + C > A){
        if(A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        }else if(A == B || B == C || A == C){
            printf("É um triângulo isósceles.\n");
        }else{
            printf("É um triângulo escaleno.\n");
        }
    }else{
        printf("Não é possível formar um triângulo com esses lados.\n");
    }
}
