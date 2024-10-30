#include <stdio.h>

int main() {
    int n, elementos[300], suma = 0;

    printf("Ingrese el valor de n (menor a 300): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &elementos[i]);
        suma += elementos[i];
    }

    printf("Suma de los primeros %d elementos: %d\n", n, suma);
    return 0;
}
