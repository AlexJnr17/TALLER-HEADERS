#include <stdio.h>

int main() {
    int ventas[100], vendedores = 0, rango[9] = {0};

    printf("Ingrese el número de vendedores: ");
    scanf("%d", &vendedores);

    for (int i = 0; i < vendedores; i++) {
        int comision;
        printf("Ingrese ventas brutas del vendedor %d: ", i + 1);
        scanf("%d", &ventas[i]);

        comision = 200 + ventas[i] * 0.09;
        if (comision >= 1000) rango[8]++;
        else if (comision >= 900) rango[7]++;
        else if (comision >= 800) rango[6]++;
        else if (comision >= 700) rango[5]++;
        else if (comision >= 600) rango[4]++;
        else if (comision >= 500) rango[3]++;
        else if (comision >= 400) rango[2]++;
        else if (comision >= 300) rango[1]++;
        else rango[0]++;
    }

    for (int i = 0; i < 9; i++) {
        printf("Rango %d: %d vendedores\n", 200 + i * 100, rango[i]);
    }

    return 0;
}
