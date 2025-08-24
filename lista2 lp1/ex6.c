#include<stdio.h>

int main (void){

int n, i, somatorio = 0;

printf("digite o n do somatório\n");
scanf("%d", &n);
for (i = 1; i <= n; i++) {
    somatorio += i*i;
}
printf("somatorio = %d", somatorio);

    return 0;
}
