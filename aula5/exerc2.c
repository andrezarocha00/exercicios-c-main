#include <stdio.h>

int main() {
    float C, i, M;
    int t;

    printf("Digite o valor do Capital: ");
    scanf("%f", &C);

    printf("Digite o valor do Juros (%%): ");
    scanf("%f", &i);

    i = i / 100;

    for (t = 1; t <= 12; t++) {
        M = C * (1 + i * t);
        printf("Mes %d: %.2f\n", t, M);
    }

    return 0;
}