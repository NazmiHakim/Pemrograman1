#include <stdio.h>

void perkalianmatrix(int n, int matrixa[n][n], int matrixb[n][n], int hasil[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasil[i][j] += matrixa[i][k] * matrixb[k][j];
            }
        }
    }
}

void inputmatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void cetakmatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int matrixa[n][n], matrixb[n][n], hasilmatrix[n][n];
    printf("Matrix A:\n");
    inputmatrix(n, matrixa);
    printf("Matrix B:\n");
    inputmatrix(n, matrixb);
    perkalianmatrix(n, matrixa, matrixb, hasilmatrix);
    printf("Matrix AxB:\n");
    cetakmatrix(n, hasilmatrix);
    return 0;
}