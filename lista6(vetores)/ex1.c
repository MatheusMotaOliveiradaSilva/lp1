#include <stdio.h>

void preenche(int* xs, int n) {
    for (int i = 0; i < n; i++) {
        printf("inclua os elementos do vetor\n");
        scanf("%d", xs + i); 
    }
}

void mostra(int* xs, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n%d\n", *(xs + i)); 
    } 
}

float media(int* xs, int n) {
    int soma = 0;
    for (int j = 0; j < n; j++) {
        soma += *(xs + j); 
    }
    return (float)soma / n;
}        

void main(void) {
    int x;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &x);
    int vec[x];
    preenche(vec, x);
    mostra(vec, x);
    float m = media(vec, x);
    printf("\nmédia: %f\n", m);
}
