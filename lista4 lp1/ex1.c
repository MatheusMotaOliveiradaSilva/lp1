#include<stdio.h>

int eh_primo(int n) {

    if (n <= 1) return 0; 
    if (n == 2) return 1;
    for (int i = 2; i < n - 1; i++) {
        if (n % i == 0) return 0;
    } 
    return 1;   
}

int main (void) {
    
    int n;
    printf("Digite um número\n");
    scanf("%d", &n);
    if (eh_primo(n)) {
        printf("o número é primo: %d\n", eh_primo(n));
    }
    else {
        printf("o número não é primo: %d\n", eh_primo(n));
    }
    return 0;

}
