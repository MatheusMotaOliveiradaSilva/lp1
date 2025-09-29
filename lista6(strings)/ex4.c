#include <stdio.h>

int substring(char* s1, char* s2) {
    int i = 0;
    if (s2[0] == '\0') {
        printf("É substring\n");
        return 1;
    }
    while (s1[i] != '\0') {
        int j = 0;
        while (s2[j] != '\0' && s1[i + j] != '\0' && s1[i + j] == s2[j]) {
            j++;
        }
        if (s2[j] == '\0') {
            printf("É substring\n");
            return 1;
        }
        i++;
    }
    printf("Não é substring\n");
    return 0;
}

void main(void) {
    char s1[256];
    char s2[256];
    int i = 0;
    char c;

    printf("Digite a string s1 (até 255 chars):\n");
    while (i < 255) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        s1[i] = c;
        i++;
    }
    s1[i] = '\0';

    printf("Digite a string s2 (até 255 chars):\n");
    i = 0;
    while (i < 255) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        s2[i] = c;
        i++;
    }
    s2[i] = '\0';

    substring(s1, s2);
}
