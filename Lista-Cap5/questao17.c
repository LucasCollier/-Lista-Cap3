
#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long a, b;

    printf("Digite um numero de 0 a 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Numero invalido\n");
        return 0;
    }

    a = fatorialIterativo(n);
    b = fatorialRecursivo(n);

    printf("Iterativo: %ld\n", a);
    printf("Recursivo: %ld\n", b);

    if (a == b) {
        printf("Os resultados coincidem\n");
    } else {
        printf("Os resultados sao diferentes\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorialRecursivo(n - 1);
}
