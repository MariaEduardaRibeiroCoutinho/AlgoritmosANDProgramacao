#include<stdio.h>

main() {
   
    int contador = 0, numero = 1;

    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");

    while(contador < 5){
        if(numero % 3 == 0){
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }
}