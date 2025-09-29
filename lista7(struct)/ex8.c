#include <stdio.h>

struct Ponto2 {
    int x;
    int y;
};

struct Ponto2 preenchePonto(void) {
    struct Ponto2 p;
    printf("x: ");
    scanf("%d", &p.x);
    printf("y: ");
    scanf("%d", &p.y);
    return p;
}

void preencheVetor(struct Ponto2 v[], int n) {
    int i = 0;
    while (i < n) {
        printf("Ponto %d\n", i);
        v[i] = preenchePonto();
        i = i + 1;
    }
}

struct Ponto2 maisDistante(struct Ponto2 v[], int n) {
    int i = 0;
    struct Ponto2 m = v[0];
    int maior = (int)m.x * m.x + (int)m.y * m.y;
    i = 1;
    while (i < n) {
        int d = (int)v[i].x * v[i].x + (int)v[i].y * v[i].y;
        if (d > maior) {
            maior = d;
            m = v[i];
        }
        i = i + 1;
    }
    return m;
}

void main(void) {
    struct Ponto2 pontos[10];
    preencheVetor(pontos, 10);
    struct Ponto2 m = maisDistante(pontos, 10);
    printf("Mais distante: (%d,%d)\n", m.x, m.y);
}
