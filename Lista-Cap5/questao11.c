
#include <stdio.h>

int ehPar(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPar(n) == 1) {
        printf("Numero par\n");
    } else {
        printf("Numero impar\n");
    }

    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
