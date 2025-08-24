#include <stdio.h>

int main(void) {
    char nomes[20][255];   
    int i, vitorias[20], empates[20], derrotas[20], pontos[20];

    for (i = 0; i < 20; i++) {
        printf("Digite a abreviação do time %d:\n ", i + 1);
        scanf("%s", nomes[i]);   

        printf("Digite o número de vitorias:\n ");
        scanf("%d", &vitorias[i]);
        
        printf("Digite o número de empates:\n ");
        scanf("%d", &empates[i]);

        printf("Digite o número de derrotas:\n ");
        scanf("%d", &derrotas[i]);
    
        pontos[i] = vitorias[i] * 3 + empates[i];
    }

    int max = pontos[0], min = pontos[0];
    int idxMax = 0, idxMin = 0;

    for (i = 1; i < 20; i++) {
        if (pontos[i] > max) {
            max = pontos[i];
            idxMax = i;
        }
        if (pontos[i] < min) {
            min = pontos[i];
            idxMin = i;
        }
    }

    printf("Time com mais pontos: %s (%d pontos)\n", nomes[idxMax], max);
    printf("Time com menos pontos: %s (%d pontos)\n", nomes[idxMin], min);

    return 0;
}