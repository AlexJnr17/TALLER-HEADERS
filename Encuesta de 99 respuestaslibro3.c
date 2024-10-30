#include <stdio.h>

int main() {
    int respuestas[99], frecuencia[9] = {0}, suma = 0, valorMedio, moda = 0, maxFrecuencia = 0;

    for (int i = 0; i < 99; i++) {
        respuestas[i] = (rand() % 9) + 1;
        suma += respuestas[i];
        frecuencia[respuestas[i] - 1]++;
    }

    for (int i = 0; i < 9; i++) {
        if (frecuencia[i] > maxFrecuencia) {
            maxFrecuencia = frecuencia[i];
            moda = i + 1;
        }
    }

    for (int i = 0; i < 99; i++) {
        for (int j = i + 1; j < 99; j++) {
            if (respuestas[i] > respuestas[j]) {
                int temp = respuestas[i];
                respuestas[i] = respuestas[j];
                respuestas[j] = temp;
            }
        }
    }

    valorMedio = (respuestas[49] + respuestas[50]) / 2;

    printf("Promedio: %.2f\n", suma / 99.0);
    printf("Valor medio: %d\n", valorMedio);
    printf("Moda: %d (Frecuencia: %d)\n", moda, maxFrecuencia);

    return 0;
}
