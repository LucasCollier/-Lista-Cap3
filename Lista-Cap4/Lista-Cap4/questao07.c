#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("Raiz: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado: %.2f\n", numero * numero);
    }

    return 0;
}