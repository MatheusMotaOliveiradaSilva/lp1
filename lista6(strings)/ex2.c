#include <stdio.h>

void concatena (char* d, char* o1, char* o2) {

	printf("digite uma string\n");
	scanf("%s", o1);

	printf("digite outra string\n");
	scanf("%s", o2);

	int i = 0, j = 0;

	while (o1[i] != '\0') {
		d[j] = o1[i];
		i++;
		j++;
	}
    i = 0;

	while (o2[i] != '\0') {
		d[j] = o2[i];
		i++;
		j++;
	}

	printf("A junção das strings resultou na string: %s\n", d);
}


void main (void) {
	char destino[100];
	char origem1[100];
	char origem2[100];
	concatena(destino, origem1, origem2);
}

