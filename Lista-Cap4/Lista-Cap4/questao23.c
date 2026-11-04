#include <stdio.h>

int main() {
    int dia, mes, ano;
    char *nome;

    printf("Digite dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch (mes) {
        case 1: nome = "janeiro"; break;
        case 2: nome = "fevereiro"; break;
        case 3: nome = "marco"; break;
        case 4: nome = "abril"; break;
        case 5: nome = "maio"; break;
        case 6: nome = "junho"; break;
        case 7: nome = "julho"; break;
        case 8: nome = "agosto"; break;
        case 9: nome = "setembro"; break;
        case 10: nome = "outubro"; break;
        case 11: nome = "novembro"; break;
        case 12: nome = "dezembro"; break;
        default:
            printf("Mes invalido\n");
            return 0;
    }

    printf("%d de %s de %d\n", dia, nome, ano);

    return 0;
}