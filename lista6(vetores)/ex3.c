#include<stdio.h>

#define L 3
#define C 3

void preenche(int arr[L][C], int L, int C) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

float media(int arr[L][C], int L, int C) {
    int soma = 0;
    int total = L * C;
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            soma += arr[i][j];
        }
    }
    
    return (float)soma / total;
}

void mostra(int arr[L][C], int L, int C) {
    printf("\narray %dx%d:\n", L, C);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d\t", arr[i][j]);
        }
    }
}

int main(void) {
    int array[L][C];
    preenche(array, L, C);
    mostra(array, L, C);
    
    float resultado = media(array, L, C);
    printf("\nMedia dos elementos: %.2f\n", resultado);
    
    return 0;

}
