
#include <stdio.h>

#define DEBUG

int somaAteN(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Soma: %d\n", somaAteN(n));

    return 0;
}

int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma = soma + i;

        #ifdef DEBUG
        printf("Soma parcial: %d\n", soma);
        #endif
    }

    return soma;
}
