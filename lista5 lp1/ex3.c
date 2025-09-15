#include <stdio.h>

void compra(int *conta, int valor) {
    *conta -= valor;
}

int main() {
    int conta1, conta2;
    int compras[] = {100, 50, 80, 30, 20};
    int n = sizeof(compras) / sizeof(compras[0]);

    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);

    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);

    for (int i = 0; i < n; i++) {
        if (conta1 >= conta2) {
            compra(&conta1, compras[i]);
            printf("Após compra %d (valor %d) -> conta1: %d, conta2: %d\n",
                   i+1, compras[i], conta1, conta2);
        } else {
            compra(&conta2, compras[i]);
            printf("Após compra %d (valor %d) -> conta1: %d, conta2: %d\n",
                   i+1, compras[i], conta1, conta2);
        }
    }

    printf("\nSaldos finais:\n");
    printf("Conta 1: %d\n", conta1);
    printf("Conta 2: %d\n", conta2);

    return 0;
}
