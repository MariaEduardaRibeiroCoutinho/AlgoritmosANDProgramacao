#include <stdio.h>
#include <string.h>
#define NUM_CIDADES 200

main() {

    int i, indice, codigo, veiculos, acidentes, maiorIndice, menorIndice, maiorIndiceValor, menorIndiceValor, totalVeiculos, totalAcidentesRS, numCidadesRS, mediaVeiculos, mediaAcidentesRS;

    for (i = 0; i < NUM_CIDADES; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &cidades[i].codigo);

        if (cidades[i].codigo == 0){
            break;
        }
        printf("Digite o estado da cidade (sigla): ");
        scanf("%s", cidades[i].estado);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%d", &cidades[i].veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &cidades[i].acidentes);
    }

     maiorIndice = -1, menorIndice = -1;
     maiorIndiceValor = -1, menorIndiceValor = -1;
     totalVeiculos = 0, totalAcidentesRS = 0, numCidadesRS = 0;

    for (i = 0; i < NUM_CIDADES && cidades[i].codigo != 0; i++) {
        indice = cidades[i].acidentes / cidades[i].veiculos;
        if(maiorIndice == -1 || indice > maiorIndiceValor){
            maiorIndice = cidades[i].codigo;
            maiorIndiceValor = indice;
        }
        if(menorIndice == -1 || indice < menorIndiceValor){
            menorIndice = cidades[i].codigo;
            menorIndiceValor = indice;
        }

        totalVeiculos += cidades[i].veiculos;

        if(strcmp(cidades[i].estado, "RS") == 0){
            totalAcidentesRS += cidades[i].acidentes;
            numCidadesRS++;
        }
    }

    printf("Maior índice de acidentes pertence à cidade %d, com valor %.2lf\n", maiorIndice, maiorIndiceValor);
    printf("Menor índice de acidentes pertence à cidade %d, com valor %.2lf\n", menorIndice, menorIndiceValor);

    if(i > 0){
        mediaVeiculos = totalVeiculos / i;
        printf("Média de veículos nas cidades brasileiras: %.2lf\n", mediaVeiculos);
    }
    if(numCidadesRS > 0){
        mediaAcidentesRS = totalAcidentesRS / numCidadesRS;
        printf("Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2lf\n", mediaAcidentesRS);
    }else{
        printf("Não há cidades do Rio Grande do Sul na amostra.\n");
    }
}
