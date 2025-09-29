#include <stdio.h>

int palavras(char* str) {
    int contador = 0;
    int palavra = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (!palavra) {
                contador++;
                palavra = 1;
            }
        } else {
            palavra = 0;
        }
        i++;
    }
    printf("Quantidade de palavras: %d\n", contador);
}

void main(void) {
    char texto[256];
    int i = 0;
    char c;
    printf("Digite uma frase:\n");
    while (i < 255) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        texto[i] = c;
        i++;
    }
    texto[i] = '\0'; 

    palavras(texto);
}
