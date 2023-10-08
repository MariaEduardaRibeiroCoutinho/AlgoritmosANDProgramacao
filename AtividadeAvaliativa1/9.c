#include <stdio.h>

main() {

    int candidato1, candidato2, candidato3, candidato4, votosNulos, votosBranco, voto;

    do{
        printf("Digite o código do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: ");
        scanf("%d", &voto);

        switch(voto){
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            case 0:
                break;
            default:
                printf("Código de voto inválido.\n");
        }
    }while(voto != 0);

    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosBranco);
}
