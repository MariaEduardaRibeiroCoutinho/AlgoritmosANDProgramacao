#include<stdio.h>

main() {
    
    float nota1, nota2, nota3, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%lf", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%lf", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4.0;

    if(media >= 7.0){
        printf("Média: %.2lf\n", media);
        printf("Aluno Aprovado!\n");
    }else{
        printf("Média: %.2lf\n", media);
        printf("Aluno Reprovado.\n");
    }
}