
# Lista Capítulo 5 - PIF

## Questão 01

a) O protótipo é `float celsius(float);`, que informa como a função será usada. A chamada é `celsius(f)`, que executa a função. A definição é onde fica o código que realiza a conversão.

b) O protótipo permite que o compilador verifique o tipo e a quantidade dos argumentos. Sem ele, a função definida depois da main pode gerar erro de compilação por não ter sido declarada.

c) O tipo é float, pois a função retorna um número decimal. O tipo da função depende do retorno, não dos parâmetros.

## Questão 02

a) Uma função pode retornar apenas um valor pelo return. O programador queria retornar a soma e a média, mas o operador vírgula faz com que apenas a média seja retornada.

b) O return encerra a função imediatamente. Em funções void, não é obrigatório colocar return no final.

c)

```c
int calcular(int a, int b, int c) {
    return (a + b + c) / 3;
}

int soma(int a, int b, int c) {
    return a + b + c;
}
```

São duas funções porque cada return devolve somente um resultado.

## Questão 03

a)
- exibe_mensagem: recebe um parâmetro e não retorna valor.
- obter_codigo: não recebe parâmetros e retorna int.
- limpar_tela: não recebe parâmetros e não retorna valor.

b) Uma função com retorno devolve um resultado, como uma soma. Uma função void executa uma tarefa sem devolver valor, como mostrar uma mensagem.

c) Não é válida, porque limpar_tela é void e não retorna nenhum valor para guardar em x.

## Questão 04

a) O caso base é n == 0, que retorna 1. O passo recursivo é n * fatorial(n - 1). Sem o caso base, a função continuaria chamando a si mesma até causar um erro.

b) Empilhamento:

fatorial(4) = 4 * fatorial(3)

fatorial(3) = 3 * fatorial(2)

fatorial(2) = 2 * fatorial(1)

fatorial(1) = 1 * fatorial(0)

fatorial(0) = 1

Desempilhamento:

fatorial(0) = 1

fatorial(1) = 1

fatorial(2) = 2

fatorial(3) = 6

fatorial(4) = 24

c) Cada chamada recursiva ocupa espaço na pilha de execução. Quando chega ao caso base, as chamadas começam a terminar. Sem caso base, a pilha pode ficar cheia e o programa falhar.

## Questão 05

a) SQR(2+3) imprime 25 e DOBRO(2+3) imprime 8. A macro SQR usa parênteses para proteger a expressão. DOBRO não usa, então a conta fica 2 + 3 * 2.

b) O define é uma diretiva do pré-processador, por isso não precisa de ponto e vírgula. Usamos letras maiúsculas por convenção, para identificar macros e constantes.

c) O correto é:

```c
#define PRN(n) printf("%d", (n))
```

Na forma incorreta, o espaço antes dos parênteses impede que PRN seja definida como macro com argumentos. Uma macro faz substituição de texto, enquanto uma função executa um bloco de código.

## Questão 06

a) `#include <stdio.h>` inclui uma biblioteca padrão da linguagem C. `#include "areas.h"` inclui um arquivo de cabeçalho criado para o programa.

b) `#undef SOMA` remove a definição da macro. Não usamos SOMA(x,y) porque o undef recebe somente o nome da macro.

c) Será exibido "Modo normal". A decisão acontece no pré-processamento, antes da compilação. As diretivas são processadas antes da geração do executável.



## Questão 14

O caso base é quando n é menor que 10, retornando o próprio número. O passo recursivo soma o último dígito com o resultado da chamada usando n / 10.

## Questão 18

O caso base é quando o expoente é zero, retornando 1. O passo recursivo multiplica a base pelo resultado da potência com expoente diminuído em 1.

## Questão 19

Na contagem regressiva, o printf vem antes da chamada recursiva. Na crescente, o printf vem depois. Assim, os números são impressos na volta das chamadas.

## Questão 23

A macro original não tem parênteses de proteção. Por isso, DOBRO(2+3) vira 2+3*2 e resulta em 8. A função retorna 10 porque recebe a soma como argumento. Depois de corrigir a macro com parênteses, o resultado também é 10.

## Questão 24

Com DEBUG definido, o programa mostra a soma parcial a cada repetição do laço. Sem DEBUG, mostra apenas a soma final. A escolha acontece durante o pré-processamento.

## Questão 26

A versão recursiva fica lenta para números grandes porque calcula várias vezes os mesmos valores da sequência, fazendo muitas chamadas repetidas.
