
#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Quadrado de A: %d\n", SQR(a));
    printf("Quadrado de B: %d\n", SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    return 0;
}
