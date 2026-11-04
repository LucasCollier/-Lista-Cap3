#include <stdio.h>
#include <math.h>

int main() {
    float a, b, resultado;
    char opcao;

    printf("Escolha +, -, *, / ou ^: ");
    scanf(" %c", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero\n");
                return 0;
            }
            resultado = a / b;
            break;
        case '^':
            resultado = pow(a, b);
            break;
        default:
            printf("Operacao invalida\n");
            return 0;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}