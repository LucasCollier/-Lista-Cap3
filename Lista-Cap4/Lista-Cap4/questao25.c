#include <stdio.h>

int main() {
    int total, pago, troco, quantidade;

    printf("Valor da compra: ");
    scanf("%d", &total);

    printf("Valor pago: ");
    scanf("%d", &pago);

    if (total <= 0 || pago <= 0 || pago < total) {
        printf("Valor invalido ou insuficiente\n");
        return 0;
    }

    troco = pago - total;

    printf("Troco: R$ %d\n", troco);

    quantidade = troco / 100;
    printf("Notas de 100: %d\n", quantidade);
    troco = troco % 100;

    quantidade = troco / 50;
    printf("Notas de 50: %d\n", quantidade);
    troco = troco % 50;

    quantidade = troco / 20;
    printf("Notas de 20: %d\n", quantidade);
    troco = troco % 20;

    quantidade = troco / 10;
    printf("Notas de 10: %d\n", quantidade);
    troco = troco % 10;

    quantidade = troco / 5;
    printf("Notas de 5: %d\n", quantidade);
    troco = troco % 5;

    quantidade = troco / 2;
    printf("Notas de 2: %d\n", quantidade);
    troco = troco % 2;

    if (troco > 0) {
        printf("Restante em moedas: R$ %d\n", troco);
    }

    return 0;
}