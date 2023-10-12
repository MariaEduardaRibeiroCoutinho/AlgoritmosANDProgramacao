#include<stdio.h>

main() {

    int numeroAluno, altura, alunoMaisAlto, alunoMaisBaixo, alturaMaisAlta, alturaMaisBaixa = 100.0;

    for(int i = 1; i <= 10; i++){
        printf("Digite o número do aluno %d: ", i);
        scanf("%d", &numeroAluno);

        printf("Digite a altura do aluno %d (em metros): ", i);
        scanf("%f", &altura);

        if(altura > alturaMaisAlta){
            alturaMaisAlta = altura;
            alunoMaisAlto = numeroAluno;
        }

        if(altura < alturaMaisBaixa){
            alturaMaisBaixa = altura;
            alunoMaisBaixo = numeroAluno;
        }
    }

    printf("Aluno mais alto: Número %d, Altura %.2f metros\n", alunoMaisAlto, alturaMaisAlta);
    printf("Aluno mais baixo: Número %d, Altura %.2f metros\n", alunoMaisBaixo, alturaMaisBaixa);
}
