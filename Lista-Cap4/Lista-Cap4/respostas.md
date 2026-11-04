# Lista de Exercícios — Capítulo 4
**Disciplina:** Programação Imperativa e Funcional (PIF)

## Questão 01

**a)** O sinal `=` serve para atribuir um valor, enquanto `==` serve para comparar. Em `if (x = 0)`, a variável x recebe 0 e o bloco do if não executa, pois a condição é falsa.

**b)** Em C, o número 0 representa falso. Qualquer número diferente de 0 representa verdadeiro.

**c)** O bloco será executado, porque x recebe -5, que é diferente de zero e, portanto, verdadeiro.

## Questão 02

**a)** Será exibida a mensagem `Opção B`, porque x é maior que 10, mas y não é maior que 10. O else pertence ao segundo if.

**b)** O else pertence ao if mais próximo que ainda não possui um else.

**c)** Código corrigido:

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opcao A\n");
    }
} else {
    printf("Opcao B\n");
}
```

## Questão 03

**a)** O operador ternário verifica se a média é maior ou igual a 7. Se for, guarda 'A'. Caso contrário, guarda 'R'. Como a média é 6.8, o resultado será 'R'.

**b)** Código usando if-else:

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não. O operador ternário serve para escolher entre expressões. Para executar vários comandos, o if-else é mais adequado.

## Questão 04

**a)** A saída será:

```text
Prata
Ouro
```

Isso acontece porque não existe break depois de Prata, então o programa continua executando o próximo case.

**b)** O break encerra a execução do switch. Quando ele é omitido, ocorre o fall-through.

**c)** O switch aceita expressões de tipos inteiros, como int e char. Não aceita float ou double.

## Questão 05

**a)** A saída será:

```text
a = 0, b = 5, c = 8
```

O incremento de b não acontece porque a primeira condição já é falsa.

**b)** No operador &&, se a primeira condição for falsa, a segunda não é avaliada. No operador ||, se a primeira condição for verdadeira, a segunda não é avaliada.

**c)** O valor de b continuará 5 e c será 20, porque a primeira condição é verdadeira e o incremento não acontece.

## Questão 06

**a)** Com idade igual a 65, serão exibidas as mensagens:

```text
Idoso
Adulto
Jovem
```

Isso acontece porque os três if são independentes e todas as condições são verdadeiras.

**b)** Nos if independentes, várias condições podem ser executadas. No else-if, apenas o primeiro bloco com condição verdadeira é executado.

**c)** Código corrigido:

```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Crianca\n");
}
```