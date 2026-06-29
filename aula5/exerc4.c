#include <stdio.h>

int main() {
    float C, i, M;
    int t, mes;

    printf("Digite o valor do Capital: ");
    scanf("%f", &C);

    printf("Digite o valor do Juros (%%): ");
    scanf("%f", &i);

    printf("Digite o valor do Tempo (meses): ");
    scanf("%d", &t);

    i = i / 100;

    for (mes = 1; mes <= t; mes++) {
        M = C * (1 + i * mes);
        printf("Mes %d: %.2f\n", mes, M);
    }

    return 0;
}