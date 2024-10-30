#include <stdio.h>

int main() {
    int ventas[4][5] = {0}; 
    int vendedor, producto, valor;
    int totalProducto[5] = {0}; 
    int totalVendedor[4] = {0}; 

    printf("Ingrese el número del vendedor (1-4), número del producto (1-5), y valor de la venta (ingrese -1 para terminar):\n");
    while (1) {
        printf("Vendedor: ");
        scanf("%d", &vendedor);
        if (vendedor == -1) break;
        
        printf("Producto: ");
        scanf("%d", &producto);
        
        printf("Valor de la venta: ");
        scanf("%d", &valor);

        vendedor--; 
        producto--;

        ventas[vendedor][producto] += valor;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            totalVendedor[i] += ventas[i][j];
            totalProducto[j] += ventas[i][j];
        }
    }

    printf("\nTabla de ventas por vendedor y producto:\n");
    printf("Vendedor\\Producto\t1\t2\t3\t4\t5\tTotal\n");

    for (int i = 0; i < 4; i++) {
        printf("%d\t\t", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d\t", ventas[i][j]);
        }
        printf("%d\n", totalVendedor[i]);
    }

    printf("Total por producto:\t");
    for (int j = 0; j < 5; j++) {
        printf("%d\t", totalProducto[j]);
    }
    printf("\n");

    return 0;
}
