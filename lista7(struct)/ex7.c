#include <stdio.h>

struct Bioshock {
    char nome[50];
    char papel[50];
    int vida;
    int nivelVigor;
    int habilidadeSkyhook;
    int ligadoSongbird; 
};

struct Bioshock preenche(void) {
    struct Bioshock p;
    printf("Nome do personagem: ");
    scanf("%49s", p.nome);
    printf("Papel (ex: VoxPopuli, fundador, pinkerton, etc): ");
    scanf("%49s", p.papel);
    printf("Vida (0 a 100): ");
    scanf("%d", &p.vida);
    printf("Nivel de Vigor (0 a 10): ");
    scanf("%d", &p.nivelVigor);
    printf("Habilidade SkyHook (0 a 10): ");
    scanf("%d", &p.habilidadeSkyhook);
    printf("Ligado ao Songbird? (1 = sim 0 = nao): ");
    scanf("%d", &p.ligadoSongbird);
    return p;
}

void exibe(struct Bioshock p) {
    printf("\n--- Personagem ---\n");
    printf("\n");
    printf("Nome: %s\n", p.nome);
    printf("Papel: %s\n", p.papel);
    printf("Vida: %d\n", p.vida);
    printf("Nivel Vigor: %d\n", p.nivelVigor);
    printf("SkyHook: %d\n", p.habilidadeSkyhook);
    printf("Ligado Songbird: %s\n", p.ligadoSongbird ? "Sim" : "Nao");
    printf("\n");
}

void main(void) {
    struct Bioshock personagem;

    personagem = preenche();

    printf("\nPersonagem criado:\n");
    exibe(personagem);

}
