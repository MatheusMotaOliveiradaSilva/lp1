#include<stdio.h>

int main (void) {

int n1, n2, i;

printf("entre com um número\n");
scanf("%d", &n1);

printf("entre com outro número\n");
scanf("%d", &n2);

if (n1 <= n2) {
for (i = n1 + 1; i < n2; i++) {
    printf("%d\n", i);
    }
}

else {
    for (i = n1 - 1; i > n2; i--){    
    printf("%d\n", i);
    }
}
    return 0;
}