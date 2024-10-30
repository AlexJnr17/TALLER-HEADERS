#include <stdio.h>

int main() {
    int clientes, boletos[10], precios[10], salas[10], peliculas[10];
    char nombres[10][30];

    printf("Ingrese el numero de clientes: ");
    scanf("%d", &clientes);

    for (int i = 0; i < clientes; i++) {
        printf("Datos del Cliente %d\n", i + 1);
        printf("Nombre: ");
        scanf("%s", nombres[i]);
        printf("Numero de boletos: ");
        scanf("%d", &boletos[i]);
        printf("Precio: ");
        scanf("%d", &precios[i]);
        printf("Pelicula (1. Spiderman, 2. Scream, 3. Matrix): ");
        scanf("%d", &peliculas[i]);
        printf("Sala (1. 401, 2. 402, 3. 403): ");
        scanf("%d", &salas[i]);
    }

    // Mostrar resumen de cada factura
    for (int i = 0; i < clientes; i++) {
        int subtotal = boletos[i] * precios[i];
        float iva = subtotal * 0.12;
        float total = subtotal + iva;

        printf("\nFactura de %s\n", nombres[i]);
        printf("Pelicula %d Sala %d Precio %d Cantidad %d Valor %d\n", peliculas[i], salas[i], precios[i], boletos[i], subtotal);
        printf("Subtotal: %.2f\n", (float)subtotal);
        printf("IVA: %.2f\n", iva);
        printf("Total: %.2f\n", total);
    }

    return 0;
}
