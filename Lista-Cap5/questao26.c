
#include <stdio.h>

long fibonacci(int n);

int main() {
    int n;

    printf("Quantidade de termos (1 a 40): ");
    scanf("%d", &n);

    if (n < 1 || n > 40) {
        printf("Quantidade invalida\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%ld ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
