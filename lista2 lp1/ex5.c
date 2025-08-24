#include <stdio.h>

int main (void) {

    int n, soma = 0;

    printf("Digite um número (digite 0 para encerrar):\n");
    if (scanf("%d", &n) != 1) return 1;

    while (n != 0) {
        soma += n;
        printf("Digite um número (digite 0 para encerrar):\n");
        if (scanf("%d", &n) != 1) return 1;
    }

    printf("Soma: %d\n", soma);
    return 0;
}