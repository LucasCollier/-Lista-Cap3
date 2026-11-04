#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres angulos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Triangulo invalido\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Retangulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Obtusangulo\n");
    } else {
        printf("Acutangulo\n");
    }

    return 0;
}