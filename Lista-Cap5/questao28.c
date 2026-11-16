
#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (preco < 0 || quantidade <= 0) {
        printf("Dados invalidos\n");
        return 0;
    }

    printf("1 - A vista (10%% desconto)\n");
    printf("2 - Outro pagamento\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao != 1 && opcao != 2) {
        printf("Opcao invalida\n");
        return 0;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    troco = calculaTroco(total, pago);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total: R$ %.2f\n", total);

    if (troco < 0) {
        printf("Valor insuficiente. Faltam R$ %.2f\n", -troco);
    } else {
        printf("Troco: R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.9;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
