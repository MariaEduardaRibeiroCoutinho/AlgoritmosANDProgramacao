#include<stdio.h>

main() {

    int contadorElevadorA, contadorElevadorB, contadorElevadorC, contadorMatutino, contadorVespertino, contadorNoturno, elevadores[50], periodos[50], totalUsuarios, maiorFluxo, periodoMaisUsado, menorFluxo;

    float diferencaPercentual, porcentagemElevadorMedia;

  
    for (int i = 0; i < 50; i++){
        printf("Usuário %d:\n", i + 1);
        printf("Elevador mais utilizado (A/B/C): ");
        scanf(" %c", &elevadores[i]);
        printf("Período mais utilizado (M/V/N): ");
        scanf(" %c", &periodos[i]);
        
        switch (elevadores[i]){
            case 'A':
                contadorElevadorA++;
                break;
            case 'B':
                contadorElevadorB++;
                break;
            case 'C':
                contadorElevadorC++;
                break;
            default:
                printf("Elevador inválido.\n");
                i--;
        }
        switch (periodos[i]){
            case 'M':
                contadorMatutino++;
                break;
            case 'V':
                contadorVespertino++;
                break;
            case 'N':
                contadorNoturno++;
                break;
            default:
                printf("Período inválido.\n");
                i--;
        }
    }

    totalUsuarios = 50;
    maiorFluxo = 0;

    if (contadorMatutino >= contadorVespertino && contadorMatutino >= contadorNoturno) {
        periodoMaisUsado = 'M';
        maiorFluxo = contadorMatutino;
    } else if (contadorVespertino >= contadorMatutino && contadorVespertino >= contadorNoturno) {
        periodoMaisUsado = 'V';
        maiorFluxo = contadorVespertino;
    } else {
        periodoMaisUsado = 'N';
        maiorFluxo = contadorNoturno;
    }

    int elevadorMaisFrequentado;
    int maiorFluxoElevador = 0;

    if(contadorElevadorA >= contadorElevadorB && contadorElevadorA >= contadorElevadorC){
        elevadorMaisFrequentado = 'A';
        maiorFluxoElevador = contadorElevadorA;
    }else if(contadorElevadorB >= contadorElevadorA && contadorElevadorB >= contadorElevadorC){
        elevadorMaisFrequentado = 'B';
        maiorFluxoElevador = contadorElevadorB;
    }else{
        elevadorMaisFrequentado = 'C';
        maiorFluxoElevador = contadorElevadorC;
    }

    menorFluxo = totalUsuarios - maiorFluxo;
    diferencaPercentual = ((float)maiorFluxo - (float)menorFluxo) / (float)maiorFluxo * 100.0;

    porcentagemElevadorMedia = ((float)(totalUsuarios - maiorFluxoElevador) / (float)totalUsuarios) * 100.0;

    printf("Qual o período mais usado de todos e a que elevador pertence: %c (Elevador %c)\n", periodoMaisUsado, elevadorMaisFrequentado);

    printf("Qual é o elevador mais frequentado e em que período se concentra o maior fluxo: Elevador %c (%c)\n", elevadorMaisFrequentado, periodoMaisUsado);

    printf("Qual a diferença percentual entre o mais usado dos horários e o menos usado: %.2f%%\n", diferencaPercentual);

    printf("Qual a percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", porcentagemElevadorMedia);
}