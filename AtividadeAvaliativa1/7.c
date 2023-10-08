#include <stdio.h>

main() {

    int numAlunos;
    float notas[numAlunos], mediaGeral, mediaPonderada;

    for(int i = 0; i < numAlunos; i++){
        double n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 4) / 10;
        notas[i] = mediaPonderada;
        mediaGeral += mediaPonderada;

        printf("Média do aluno %d: %.2lf\n", i + 1, mediaPonderada);
        if(mediaPonderada >= 7.0){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }
    }

    mediaGeral /= numAlunos;
    printf("Média geral da turma: %.2lf\n", mediaGeral);
}
