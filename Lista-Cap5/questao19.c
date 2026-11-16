
#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagem(n);
    printf("Fogo!\n");

    printf("Contagem crescente:\n");
    contagemCrescente(n);

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    printf("%d\n", n);
}
