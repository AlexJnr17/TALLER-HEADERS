#include <stdio.h>

int main() {
    int voto, votos[5] = {0}, total = 0;

    printf("Ingrese los votos (0 para terminar): ");
    while (1) {
        scanf("%d", &voto);
        if (voto == 0) break;
        votos[voto - 1]++;
        total++;
    }

    for (int i = 0; i < 5; i++) {
        printf("Candidato %d: %d votos (%.2f%%)\n", i + 1, votos[i], (votos[i] * 100.0) / total);
    }

    return 0;
}
