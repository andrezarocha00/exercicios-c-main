#include <stdio.h>

int main() {
    float C, i, t, M;

    printf("Digite o valor do Capital: ");
    scanf("%f", &C);

    printf("Digite o valor do Juros (%%): ");
    scanf("%f", &i);

    printf("Digite o valor do Tempo: ");
    scanf("%f", &t);

    i = i / 100;

    M = C * (1 + i * t);

    printf("Montante: %.2f\n", M);

    return 0;
}

   
