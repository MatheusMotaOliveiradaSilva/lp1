#include <stdio.h>

struct Jogador {
    char nome[50];
    int passe;
    int finalizacao;
    int defesa;
    int drible; 
};

void exibeJogador(struct Jogador j) {
    printf("Nome: %s\n", j.nome);
    printf("passe: %d\n", j.passe);
    printf("finalização: %d\n", j.finalizacao);
    printf("defesa: %d\n", j.defesa);
    printf("drible: %d\n", j.drible);
    printf("\n");
}

void main(void) {
    struct Jogador arrascaeta = {"Arrascaeta", 85, 82, 55, 86};
    struct Jogador jorginho  = {"Jorginho", 84, 74, 85, 73};
    struct Jogador saul      = {"Saul", 80, 78, 77, 82};

    exibeJogador(arrascaeta);
    exibeJogador(jorginho);
    exibeJogador(saul);
}

