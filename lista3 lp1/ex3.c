#include <stdio.h>

int main(void) {

    signed char temps[50];
    int i, controle, soma = 0;
    double media;

    for (i = 0; i < 5; i++) {
        controle = 0;

        while (controle == 0) {
            printf("Digite a temperatura %d entre -100 e 100:\n", i + 1);

            if (scanf("%hhd", &temps[i]) == 1) {

                if (temps[i] >= -100 && temps[i] <= 100) {
                    controle = 1; 

                } else {
                    printf("Temperatura fora do intervalo!\n");
                }

            } else {
                printf("Entrada inválida!\n");
                scanf("%*s"); 
            }
        }

        soma += temps[i]; 
    }

    media = (double) soma / 50;

    printf("\nMédia das temperaturas: %.2f\n", media);

    printf("Valores acima da média:\n");

    for (i = 0; i < 50; i++) {
        if (temps[i] > media) {
            printf("%d ", temps[i]);
        }
    }

    printf("\n");

    return 0;
}