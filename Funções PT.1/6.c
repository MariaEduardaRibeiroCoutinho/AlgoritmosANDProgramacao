#include<stdio.h>
 
float calcularImc(float altura, float peso){
    float imc = peso/(alutra*altura);
    return imc;
}
void mostrarSituacao(float imc){
    printf("IMC: %f", imc)
    if(imc < 16){
        printf("Abaixo do peso");
    }else if(imc >= 16 && imc < 25){
        printf("normal");
    }else{
        printf("acima do peso");
    }
}

main(){

    float alt, peso;
    printf("Digite o peso e a altura");
    scanf("%f %f", &peso, &alt);
    float imc = calcularImc(alt, peso);
    mostrarSituacao(imc);
}