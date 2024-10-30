#include <stdio.h>

int main() {
    int n;
    printf("Ingrese cantidad de productos: ");
    scanf("%d", &n);

    int cantidad[n], precio[n];
    for (int i = 0; i < n; i++) {
        printf("Producto %d - Cantidad vendida: ", i + 1);
        scanf("%d", &cantidad[i]);
        printf("Producto %d - Precio en dolares: ", i + 1);
        scanf("%d", &precio[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Producto %d: %d unidades vendidas, Ingreso Total: %d USD\n", i + 1, cantidad[i], cantidad[i] * precio[i]);
    }

    return 0;
}
