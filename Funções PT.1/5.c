#include<studio.h>
#include<math.h>

void calcularVolumeE(double r){
    double PI = 3.1415, volume;
    volume = (4 * 3 * PI * pow(r, 3))/3;
    printf("O volume da esfera: %lf", volume);
}

main(){
    
    double raio = 5;
    calcularVolumeE(raio);

}