#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Distancia em km: ");
    scanf("%f", &distancia);

    printf("Litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0 || distancia < 0) {
        printf("Valores invalidos\n");
        return 0;
    }

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}