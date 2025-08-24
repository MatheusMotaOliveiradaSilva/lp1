#include<stdio.h> 

int main (void) {

float kmh, mph;
printf("Digite a velocidade/hora em milhas\n");
scanf("%f", &mph);
kmh = mph*1.6;

if (kmh > 100.00) {
   printf("DESACELERE\n");
}
else if (kmh <= 100 && kmh >= 80) {
    printf("MANTENHA\n");
}
else {
   printf("ACELERE\n");
} 
   return 0;
}