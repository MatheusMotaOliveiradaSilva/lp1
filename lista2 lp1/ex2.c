#include<stdio.h>
#include<stdlib.h>

int main() {	
int v1, v2;
printf("Digite um número\n");
scanf("%d", &v1);
printf("Digite outro número\n");
scanf("%d", &v2);
if (v1 > v2){
   printf("O maior número é: %d\n", v1);
}
else{
   printf("O maior número é: %d\n", v2);
} 
   return 0;
}