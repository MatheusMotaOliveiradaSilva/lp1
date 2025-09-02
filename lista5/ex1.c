#include <stdio.h>

int main(void) {

    int a, b;

	printf("escolha um valor\n");
	scanf("%d", &a);

	printf("escolha outro valor\n");
	scanf("%d", &b);

	printf("a = %d, b = %d", a, b);

	int* p;

	if (a > b) {
		p = &a;
	}	
	else {
		p = &b;
	}	

	*p = *p - 50;


	printf("\na = %d, b = %d\n", a, b);
	
	return 0;
}