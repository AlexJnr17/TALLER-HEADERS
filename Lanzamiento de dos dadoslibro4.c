#include <stdio.h>
#include <stdlib.h>

int main() {
    int frecuencia[13] = {0}, lanzamientos = 6000, exito = 0;

    for (int i = 0; i < lanzamientos; i++) {
        int dado1 = (rand() % 6) + 1;
        int dado2 = (rand() % 6) + 1;
        int suma = dado1 + dado2;
        frecuencia[suma]++;
        if (suma == 7) exito++;
    }

    printf("Suma\tFrecuencia\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\n", i, frecuencia[i]);
    }
    printf("Éxitos (suma 7): %d (%.2f%%)\n", exito, (exito * 100.0) / lanzamientos);

    return 0;
}
