#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite as faltas: ");
    scanf("%d", &faltas);

    if (nota < 0 || nota > 10 || faltas < 0) {
        printf("Dados invalidos\n");
        return 0;
    }

    if (nota >= 9) {
        conceito = faltas <= 20 ? 'A' : 'B';
    } else if (nota >= 7.5) {
        conceito = faltas <= 20 ? 'B' : 'C';
    } else if (nota >= 5) {
        conceito = faltas <= 20 ? 'C' : 'D';
    } else if (nota >= 4) {
        conceito = faltas <= 20 ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}