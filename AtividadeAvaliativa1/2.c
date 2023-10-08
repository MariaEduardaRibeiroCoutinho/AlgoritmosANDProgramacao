#include<stdio.h>

main() {

    int anos = ;
    float chicoAltura = 150.0, zeAltura = 110.0;  

    while(chicoAltura >= zeAltura){
        chicoAltura += 2.0; 
        zeAltura += 3.0;    
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);
}
