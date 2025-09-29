/* Não entendi muito bem como seria definido a pontuação e a posição, então pedi pro chat gpt pegar o código que eu já tinha feito e randomizar esses valores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Posicao {
    int x;
    int y;
};

struct Personagem {
    int id;
    struct Posicao pos;
    int pontos;
};

void main(void) {
    struct Personagem pcs[10];
    int i = 0;

    srand((unsigned) time(NULL));


    i = 0;
    while (i < 10) {
        pcs[i].id = i + 1;                 
        pcs[i].pos.x = (rand() % 9) + 1;     
        pcs[i].pos.y = (rand() % 9) + 1;     
        pcs[i].pontos = (rand() % 10) + 1;     
        i = i + 1;
    }

    printf("Lista de 10 personagens (id, x, y, pontos):\n");
    i = 0;
    while (i < 10) {
        printf("id=%d pos=(%d,%d) pontuação=%d\n",
               pcs[i].id, pcs[i].pos.x, pcs[i].pos.y, pcs[i].pontos);
        i = i + 1;
    }
}
