
#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    printf("Macro original: %d\n", DOBRO(2+3));
    printf("Funcao: %d\n", dobro(2+3));

    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    printf("Macro corrigida: %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
