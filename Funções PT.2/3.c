#include <stdio.h>

void trocaLinhasColunas(int matriz[][10], int nLinhas, int nColunas) {
    int aux;

    for (int i = 0; i < nColunas; i++) {
        aux = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = aux;
    }

    for (int i = 0; i < nLinhas; i++) {
        aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux;
    }

    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            if (i == j) {
                aux = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = aux;
            }
        }
    }

    for (int i = 0; i < nLinhas; i++) {
        aux = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = aux;
    }
}