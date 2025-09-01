#include<stdio.h>

int eh_primo(int n) {

    if (n <= 1) return 0; 
    if (n == 2) return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    } 
}

int todos_os_primos(int max) {
    for (int j = 2; j <= max; j++) {
        if (eh_primo(j)) {
            printf("%d\n", j);
        } 
    }
} 

int main (void) {
    
    int n;
    printf("Digite um número\n");
    if (scanf("%d", &n) != 1) return 1;
    printf("\n");
    todos_os_primos(n);

    return 0;
}

