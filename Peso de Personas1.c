#include <stdio.h>

int main() {
    int peso[5], suma = 0, promedio, mayor = 0, menor = 0;
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el peso de la persona %d: ", i + 1);
        scanf("%d", &peso[i]);
        suma += peso[i];
    }
    promedio = suma / 5;
    
    for (int i = 0; i < 5; i++) {
        mayor += peso[i] > promedio;
        menor += peso[i] < promedio;
    }
    
    printf("Promedio de peso: %d\n", promedio);
    printf("Personas con peso mayor al promedio: %d\n", mayor);
    printf("Personas con peso menor al promedio: %d\n", menor);
    return 0;
}
