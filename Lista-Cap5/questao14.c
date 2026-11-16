
#include <stdio.h>

int somaDigitos(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido\n");
    } else {
        printf("Soma dos digitos: %d\n", somaDigitos(n));
    }

    return 0;
}

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }

    return n % 10 + somaDigitos(n / 10);
}
