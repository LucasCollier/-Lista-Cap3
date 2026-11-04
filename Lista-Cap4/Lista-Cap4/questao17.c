#include <stdio.h>

int main() {
    float valor, total, comissao;
    int opcao;

    printf("Valor da compra: ");
    scanf("%f", &valor);

    printf("1 - A vista\n2 - Parcelado\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        total = valor * 0.90;
        comissao = total * 0.05;
        printf("Total: R$ %.2f\n", total);
    } else if (opcao == 2) {
        total = valor;
        comissao = total * 0.05;
        printf("3 parcelas de R$ %.2f\n", total / 3);
    } else {
        printf("Opcao invalida\n");
        return 0;
    }

    printf("Comissao: R$ %.2f\n", comissao);

    return 0;
}