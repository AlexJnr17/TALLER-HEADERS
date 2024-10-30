#include <stdio.h>

int main() {
    int lluvia[5][12];
    int sumaAnual[5] = {0}, mediaMensual[12] = {0}, total = 0;

    // Ingresar los datos de lluvia
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            printf("Ingrese la lluvia para el año %d, mes %d: ", i + 1, j + 1);
            scanf("%d", &lluvia[i][j]);
            sumaAnual[i] += lluvia[i][j];
            mediaMensual[j] += lluvia[i][j];
            total += lluvia[i][j];
        }
    }

    // Mostrar lluvia total por año y media anual
    for (int i = 0; i < 5; i++) {
        printf("Lluvia total año %d: %d\n", i + 1, sumaAnual[i]);
    }
    printf("Media anual: %d\n", total / 60);

    // Calcular y mostrar media mensual
    for (int j = 0; j < 12; j++) {
        printf("Media mensual para el mes %d: %d\n", j + 1, mediaMensual[j] / 5);
    }

    return 0;
}
