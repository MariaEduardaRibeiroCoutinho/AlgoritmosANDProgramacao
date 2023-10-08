#include<stdio.h>

main() {

    int quantidadeOtimo, quantidadeBom, quantidadeRegular, quantidadeRuim, quantidadePessimo, totalIdadeRuim, maiorIdadePessimo, maiorIdadeOtimo, maiorIdadeRuim, diferencaBomRegular;
    
    float mediaIdadeRuim, porcentagemPessimo;

    for(int i = 0; i < 100; i++){
        int idade, opcao;

        printf("Espectador %d:\n", i + 1);
        printf("Informe sua idade: ");
        scanf("%d", &idade);

        printf("Informe sua opinião (A/B/C/D/E): ");
        scanf(" %c", &opcao);

        switch(opcao){
            case 'A':
                quantidadeOtimo++;
                if(idade > maiorIdadeOtimo){
                    maiorIdadeOtimo = idade;
                }
                break;
            case 'B':
                quantidadeBom++;
                break;
            case 'C':
                quantidadeRegular++;
                break;
            case 'D':
                quantidadeRuim++;
                totalIdadeRuim += idade;
                if(idade > maiorIdadeRuim){
                    maiorIdadeRuim = idade;
                }
                break;
            case 'E':
                quantidadePessimo++;
                if(idade > maiorIdadePessimo){
                    maiorIdadePessimo = idade;
                }
                break;
            default:
                printf("Opção inválida.\n");
                i--; 
        }
    }

    printf("a) Quantidade de respostas 'Ótimo': %d\n", quantidadeOtimo);

    diferencaBomRegular = quantidadeBom - quantidadeRegular;

    printf("b) Diferença percentual entre respostas 'Bom' e 'Regular': %.2f%%\n", (float)diferencaBomRegular / quantidadeBom * 100);

    mediaIdadeRuim = (float)totalIdadeRuim / quantidadeRuim;
    printf("c) Média de idade das pessoas que responderam 'Ruim': %.2f\n", mediaIdadeRuim);

    porcentagemPessimo = (float)quantidadePessimo / 100 * 100;

    printf("d) Percentagem de respostas 'Péssimo': %.2f%%\n", porcentagemPessimo);

    printf("   Maior idade que utilizou esta opção: %d\n", maiorIdadePessimo);

    printf("e) Diferença de idade entre a maior idade que respondeu 'Ótimo' e 'Ruim': %d anos\n", maiorIdadeOtimo - maiorIdadeRuim);
}