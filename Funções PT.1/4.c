#include<stdio.h>

double volumeC(double raio, double altura);
main(){
    
    double raio =2, altura = 5, resultado;
    resultado = volumeC(raio, altura);
    printf("Volume do cilindro: %f", resultado);


}

double volumeC(double raio, double altura){
    double PI = 3.1415, volume;
    volume = PI * (raio * raio) * altura;
    return volume;
}