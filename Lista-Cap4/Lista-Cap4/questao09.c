#include <stdio.h>

int main() {
    float trabalho, avaliacao, exame, media;

    printf("Nota do trabalho: ");
    scanf("%f", &trabalho);

    printf("Nota da avaliacao: ");
    scanf("%f", &avaliacao);

    printf("Nota do exame: ");
    scanf("%f", &exame);

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10;

    printf("Media: %.2f\n", media);

    if (media < 0 || media > 10) {
        printf("Media invalida\n");
    } else if (media < 3) {
        printf("Reprovado\n");
    } else if (media < 5) {
        printf("Em recuperacao\n");
    } else {
        printf("Aprovado\n");
    }

    return 0;
}