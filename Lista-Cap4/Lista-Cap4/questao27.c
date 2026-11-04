#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo invalido\n");
        return 0;
    }

    if (horas <= 2) {
        valor = horas * 2;
    } else if (horas <= 4) {
        valor = 4 + (horas - 2) * 2.5;
    } else {
        valor = 9 + (horas - 4) * 3;
    }

    printf("Tempo: %d horas\n", horas);
    printf("Total: R$ %.2f\n", valor);

    return 0;
}