#include <stdio.h>

int main() {
    float valor, imposto;

    int estado;

    printf("Valor do produto: ");
    scanf("%f", &valor);

    printf("1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            imposto = 0.07;
            break;
        case 2:
            imposto = 0.12;
            break;
        case 3:
            imposto = 0.15;
            break;
        case 4:
            imposto = 0.08;
            break;
        default:
            printf("Estado invalido\n");
            return 0;
    }

    printf("Preco final: R$ %.2f\n", valor * (1 + imposto));

    return 0;
}