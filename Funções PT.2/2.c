#include <stdio.h>
#include <stdlib.h>

void imprimir_itens(int *itens, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Item %d: %d\n", i + 1, itens[i]);
    }
}

main() {
    
    int itens[] = {1, 2, 3, 4, 5}, quantidade = sizeof(itens) / sizeof(itens[0]);

    printf("Carrinho de compras:\n");
    imprimir_itens(itens, quantidade);
}