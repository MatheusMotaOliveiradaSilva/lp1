#include <stdio.h>

int tamanho(char* str) {
	int tam = 0; 
	int i = 0;
	printf("digite uma palavra (string)\n");
	//gets(&str);
	scanf("%s", str);
	while (str[i] != 0) {
		i++;
		tam++;
	}
	printf("A quantidade de caracteres da string é %d\n", tam);
}

void main (void) {
	char palavra[100];
	tamanho(palavra);
}