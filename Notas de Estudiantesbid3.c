#include <stdio.h>

int main() {
    int estudiantes, notas[5][6];
    int sumaNotas[5] = {0}, promedioClase = 0;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &estudiantes);

    for (int i = 0; i < estudiantes; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Ingrese la nota %d del estudiante %d: ", j + 1, i + 1);
            scanf("%d", &notas[i][j]);

            sumaNotas[i] += notas[i][j] * (j < 4 ? 15 : 20);
        }
        sumaNotas[i] /= 100;  // Calcular el promedio ponderado
        promedioClase += sumaNotas[i];
    }

    promedioClase /= estudiantes;

    // Mostrar resultados
    for (int i = 0; i < estudiantes; i++) {
        int desviacion = sumaNotas[i] - promedioClase;
        printf("Estudiante %d: Promedio %d, Desviación %d\n", i + 1, sumaNotas[i], desviacion);
    }
    printf("Promedio de la clase: %d\n", promedioClase);

    return 0;
}
