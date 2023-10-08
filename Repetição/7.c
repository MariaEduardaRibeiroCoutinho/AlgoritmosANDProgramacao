#include <stdio.h>

main() {

    int numHomens, numMulheres, nome, sexo, altura, peso;
    
    float somaAlturaHomens, somaAlturaMulheres, somaAlturaGrupo, somaPesoHomens, somaPesoMulheres = 0, somaPesoGrupo, pesoMediaHomens, pesoMediaMulheres, pesoMediaGrupo, alturaMediaGrupo, alturaMediaMulheres, alturaMediaHomens;

    for(int i = 1; i <= 10; i++){
        printf("Informe os dados da pessoa %d:\n", i);

        printf("Nome: ");
        scanf("%s", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Peso (em kg): ");
        scanf("%f", &peso);

        if(sexo == 'M' || sexo == 'm'){
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        }else if(sexo == 'F' || sexo == 'f'){
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }else{
            printf("Sexo inválido. Use M/m para masculino ou F/f para feminino.\n");
            i--;
            continue;
        }

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;
    }

    alturaMediaHomens = (numHomens > 0) ? (somaAlturaHomens / numHomens) : 0;
    alturaMediaMulheres = (numMulheres > 0) ? (somaAlturaMulheres / numMulheres) : 0;
    alturaMediaGrupo = (somaAlturaGrupo / 10);

    pesoMediaHomens = (numHomens > 0) ? (somaPesoHomens / numHomens) : 0;
    pesoMediaMulheres = (numMulheres > 0) ? (somaPesoMulheres / numMulheres) : 0;
    pesoMediaGrupo = (somaPesoGrupo / 10);

    printf("\nEstatísticas do grupo:\n");
    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2f metros\n", alturaMediaHomens);
    printf("Altura média das mulheres: %.2f metros\n", alturaMediaMulheres);
    printf("Altura média do grupo: %.2f metros\n", alturaMediaGrupo);
    printf("Peso médio dos homens: %.2f kg\n", pesoMediaHomens);
    printf("Peso médio das mulheres: %.2f kg\n", pesoMediaMulheres);
    printf("Peso médio do grupo: %.2f kg\n", pesoMediaGrupo);

}