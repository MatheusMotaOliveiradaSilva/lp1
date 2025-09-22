#include <stdio.h>

void preenche(int* xs, int n) {
	//printf("Digite o tamanho do vetor\n");
	//scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("inclua os elementos dos vetores\n");
	    scanf("%d", &xs[i]);
	}
}

	void mostra(int* xs, int n) {
		for (int i = 0; i < n; i++) {
    	printf("\n%d\n", xs[i]);
    } 
	}

void main (void) {
	int x, vec[x];
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &x);
	preenche(vec, x);
    mostra(vec, x);


}