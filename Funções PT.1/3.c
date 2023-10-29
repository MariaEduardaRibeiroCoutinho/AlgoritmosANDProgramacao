#include<stdio.h>

//prototipo da funcao
float entradaTemp(){
    float tempF;
    printf("Digite a temperatura em F");
    scanf("%f", &tempF);
    return tempF;
}

float converterC(float f){
    float celsius = (f - 32) * (5.0/9.0);
    return celsius;
}

main(){

    float tempF = entradaTemp();
    float tempC = converterC(tempF);

    printf("Temp em celsius: %f", tempC);
}

/*#include<stdio.h>

//prototipo da funcao
float entradaTemp(){
    float tempF;
    printf("Digite a temperatura em F");
    scanf("%f", &tempF);
    return tempF;
}

float converterC(){
    float tempF = entradaTemp();
    float celsius = (tempF - 32) * (5.0/9.0);
    return celsius;
}

main(){

    float tempC = converterC();

    printf("Temp em celsius: %f", tempC);
}*/