#include <stdio.h>

int main() {
    float salario, aumento, percentual;
    int cargo;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("1 - Tecnico\n2 - Gerente\n3 - Outros\n");
    scanf("%d", &cargo);

    if (cargo == 1) {
        percentual = salario <= 3000 ? 0.15 : 0.10;
    } else if (cargo == 2) {
        percentual = salario <= 5000 ? 0.10 : 0.05;
    } else if (cargo == 3) {
        percentual = 0.08;
    } else {
        printf("Cargo invalido\n");
        return 0;
    }

    aumento = salario * percentual;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", salario + aumento);

    return 0;
}