#include <stdio.h>

void trocaColunas(int matriz[][10], int nLinhas, int nColunas) {
    int aux;

    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas/2; j++) {
            aux = matriz[i][j];
            matriz[i][j] = matriz[i][nColunas-j-1];
            matriz[i][nColunas-j-1] = aux;
        }
    }
}
