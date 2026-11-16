
#include <stdio.h>

int ehPrimo(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("O numero e primo\n");
    } else {
        printf("O numero nao e primo\n");
    }

    printf("Primos de 1 a 50:\n");

    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
