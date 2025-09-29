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

struct Posicao gera_pos_aleatoria(void) {
    struct Posicao p;
    p.x = (rand() % 10) + 1; 
    p.y = (rand() % 10) + 1;
    return p;
}

struct Personagem gera_personagem(int id) {
    struct Personagem pc;
    pc.id = id;
    pc.pos = gera_pos_aleatoria();
    pc.pontos = (rand() % 10) + 1;
    return pc;
}

void desenha_mapa(struct Personagem v[], int n) {
    int mapa[10][10];
    int i = 0;
    int j = 0;

    i = 0;
    while (i < 10) {
        j = 0;
        while (j < 10) {
            mapa[i][j] = -1;
            j = j + 1;
        }
        i = i + 1;
    }

    i = 0;
    while (i < n) {
        int x = v[i].pos.x - 1;
        int y = v[i].pos.y - 1; 
        if (x >= 0 && x < 10 && y >= 0 && y < 10) {
            mapa[y][x] = v[i].id;
        }
        i = i + 1;
    }

    printf("   ");
    j = 0;
    while (j < 10) {
        printf(" %d", j + 1); 
        j = j + 1;
    }
    printf("\n");

    
    i = 0;
    while (i < 10) {
        printf("%2d ", i + 1); 
        j = 0;
        while (j < 10) {
            if (mapa[i][j] == -1) {
                printf(" .");
            } else {
                printf(" %d", mapa[i][j] % 10);
            }
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
}

void main(void) {
    struct Personagem pcs[10];
    int k = 0;
    srand((unsigned) time(NULL));

    k = 0;
    while (k < 10) {
        pcs[k] = gera_personagem(k + 1);
        k = k + 1;
    }

    printf("Mapa resultante (linhas/colunas exibidas 1..10):\n");
    desenha_mapa(pcs, 10);
}

