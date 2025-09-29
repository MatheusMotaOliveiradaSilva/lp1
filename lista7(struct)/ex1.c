#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

void main(void) {

    struct Personagem p1;
    p1.forca = 10;
    p1.energia = 50;
    p1.experiencia = 30;

    struct Personagem p2 = {18, 20, 25};

    printf("P1: %d %d %d\n", p1.forca, p1.energia, p1.experiencia);
    printf("P2: %d %d %d\n", p2.forca, p2.energia, p2.experiencia);
}
