#include<stdio.h>

main() {

    int contador = 0, numero = 2, soma = 0;

    printf("Soma dos 50 primeiros números pares:\n");

    while(contador < 50){
        soma += numero;
        numero += 2; 
        contador++;
    }

    printf("A soma é: %d\n", soma);
}