#include <stdio.h>

int main() {
    int habitaciones[3][4] = {{1, 120, 150, 220}, {2, 130, 160, 230}, {3, 100, 120, 200}};
    int sumaTemporada[3] = {0, 0, 0};

    // Sumar precios por temporada
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 4; j++) {
            sumaTemporada[j - 1] += habitaciones[i][j];
        }
    }

    // Mostrar promedios de cada temporada
    for (int i = 0; i < 3; i++) {
        printf("Promedio de temporada %d: %d\n", i + 1, sumaTemporada[i] / 3);
    }

    return 0;
}
