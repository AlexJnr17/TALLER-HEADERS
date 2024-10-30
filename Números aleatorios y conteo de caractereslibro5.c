#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10], caracteres = 0;

    for (int i = 0; i < 10; i++) {
        numeros[i] = (rand() % 1000) + 1;
        printf("Numero %d: %d\n", i + 1, numeros[i]);
        printf("Total acumulado de caracteres: %d\n", caracteres += printf("%d\n", numeros[i]));
    }

    printf("Total de caracteres impresos: %d\n", caracteres);
    return 0;
}
