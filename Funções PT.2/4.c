#include <stdio.h>

void somaColunas(int matriz[][10], int nLinhas, int nColunas) {
    int soma;

    for (int i = 0; i < nColunas; i++) {
        soma = 0;
        for (int j = 0; j < nLinhas; j++) {
            soma += matriz[j][i];
        }
        printf("Soma da coluna %d: %d\n", i, soma);
    }
}
