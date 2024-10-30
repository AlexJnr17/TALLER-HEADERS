#include <stdio.h>

int main() {
    int n, a[200], temp;

    printf("Ingrese el valor de n (menor a 200): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Array invertido: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
