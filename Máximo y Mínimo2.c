#include <stdio.h>

int main() {
    int numeros[10], maximo, minimo;
    for (int i = 0; i < 10; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
        if (i == 0 || numeros[i] > maximo) maximo = numeros[i];
        if (i == 0 || numeros[i] < minimo) minimo = numeros[i];
    }
    
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);
    return 0;
}
