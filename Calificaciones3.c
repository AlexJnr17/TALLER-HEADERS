#include <stdio.h>

int main() {
    int n, nota, a = 0, b = 0, c = 0, d = 0, e = 0, max = 0, min = 10;
    printf("Cantidad de alumnos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese la calificacion del alumno %d: ", i + 1);
        scanf("%d", &nota);

        if (nota >= 9) a++;
        else if (nota >= 8) b++;
        else if (nota >= 6) c++;
        else if (nota >= 4) d++;
        else e++;

        if (nota > max) max = nota;
        if (nota < min) min = nota;
    }

    printf("Calificaciones A: %d\n", a);
    printf("Calificaciones B: %d\n", b);
    printf("Calificaciones C: %d\n", c);
    printf("Calificaciones D: %d\n", d);
    printf("Calificaciones E: %d\n", e);
    printf("Nota mas alta: %d\n", max);
    printf("Nota mas baja: %d\n", min);

    return 0;
}
