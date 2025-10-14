#include<stdio.h>
#include <string.h>

void main (void) {
	char str[26];
	printf("escreva uma string\n");
	scanf("%25s", str);
	printf("%s\n", str);
	FILE* f = fopen ("ex1.txt", "w");
	for (int i = 0; i < strlen(str); i++) {
		fputc(str[i], f);
	}	
	fputc('\n', f);	
	fclose(f);		
}	