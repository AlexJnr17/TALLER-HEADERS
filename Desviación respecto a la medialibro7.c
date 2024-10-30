#include <stdio.h>

int main() {
    int n;
    float numeros[100], suma = 0, media;

    printf("Ingrese el número de elementos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        suma += numeros[i];
    }

    media = suma / n;
    printf("Media: %.2f\n", media);

    for (int i = 0; i < n; i++) {
        printf("Desviación del elemento %d: %.2f\n", i + 1, numeros[i] - media);
    }

    return 0;
}
