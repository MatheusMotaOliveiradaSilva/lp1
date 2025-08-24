#include<stdio.h> 

int main (void) {

float real, dolar;
printf("Digite o valor do celular em dólar\n");
scanf("%f", &dolar);
real = dolar*3.17;

if (real < 1000.00) {
   printf("BOM NEGÓCIO\n");
}
else {
   printf("MAU NEGÓCIO\n");
} 
   return 0;
}