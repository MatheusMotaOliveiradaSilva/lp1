#include<stdio.h>

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

void indice(int* xs, int n) {
    int i;
    printf("escolha um indice para remover um dos valores do vetor:\n");
    scanf("%d", &i); 
    
    if (i >= 0 && i < n) {
        xs[i] = 0;
        printf("Vetor modificado:\n");
        mostra(xs, n); 
    } else {
        printf("Indice invalido!\n");
    }
}

void main(void) {
    int vet[5];
    preenche(vet, 5);
    mostra(vet, 5);
    indice(vet, 5);
}  