#include <stdio.h>
#include <string.h>

main() {
    
    int totalEntrevistados = 0, contVotos[5] = [0], votoMaisVotado = 0, continuar, totalMulheres = 0;

    while(totalEntrevistados < 300){
        printf("Entrevistado %d:\n", totalEntrevistados + 1);

        printf("Nome: ");
        scanf("%s", entrevistados[totalEntrevistados].nome);

        printf("Idade: ");
        scanf("%d", &entrevistados[totalEntrevistados].idade);

        if(entrevistados[totalEntrevistados].idade < 13){
            printf("Idade menor que 13 anos, entrevista não válida.\n");
            continue;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &entrevistados[totalEntrevistados].sexo);

        if(entrevistados[totalEntrevistados].sexo != 'M' && entrevistados[totalEntrevistados].sexo != 'F'){
            printf("Sexo inválido, entrevista não válida.\n");
            continue;
        }

        printf("Voto (1-5):\n");
        printf("1) Sam Kerr - Austrália\n");
        printf("2) Alex Morgan - Estados Unidos\n");
        printf("3) Dzsenifer Marozsan - Alemanha\n");
        printf("4) Amandine Henry - França\n");
        printf("5) Marta Vieira - Brasil\n");
        scanf("%d", &entrevistados[totalEntrevistados].voto);

        if(entrevistados[totalEntrevistados].voto < 1 || entrevistados[totalEntrevistados].voto > 5){
            printf("Voto inválido, entrevista não válida.\n");
            continue;
        }

        contVotos[entrevistados[totalEntrevistados].voto - 1]++;

        totalEntrevistados++;

        printf("Deseja continuar a entrevista? (S/N): ");
        scanf(" %c", &continuar);

        if(continuar == 'N' || continuar == 'n' || totalEntrevistados >= 50){
            break;
        }
    }

    for(int i = 1; i < 5; i++){
        if(contVotos[i] > contVotos[votoMaisVotado]){
            votoMaisVotado = i;
        }
    }

    printf("\nRelatórios:\n");

    for(int i = 0; i < 5; i++){
        printf("Votos para a jogadora %d: %d\n", i + 1, contVotos[i]);
    }

    printf("Jogadora(s) mais votada(s): ");
    for(int i = 0; i < 5; i++){
        if(contVotos[i] == contVotos[votoMaisVotado]){
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    printf("Entrevistados:\n");
    printf("Maior de idade:\n");

    for(int i = 0; i < totalEntrevistados; i++){
        if(entrevistados[i].idade >= 18){
            printf("Nome: %s, Idade: %d, Sexo: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
        }
    }

    printf("Menor de idade:\n");

    for(int i = 0; i < totalEntrevistados; i++){
        if(entrevistados[i].idade < 18){
            printf("Nome: %s, Idade: %d, Sexo: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
        }
    }

    printf("Pessoas maiores de idade que votaram na Marta Vieira:\n");

    for(int i = 0; i < totalEntrevistados; i++){
        if(entrevistados[i].idade >= 18 && entrevistados[i].voto == 5) {
            printf("Nome: %s\n", entrevistados[i].nome);
        }
    }

    for(int i = 0; i < totalEntrevistados; i++){
        if(entrevistados[i].sexo == 'F'){
            totalMulheres++;
        }
    }
    printf("Quantidade de mulheres que participaram da pesquisa: %d\n", totalMulheres);
}
