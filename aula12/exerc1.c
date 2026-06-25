#include <stdio.h>
#include <math.h>

int main() {
    float x[4], y[4];
    float lados[4], diag1, diag2;
    int i;

    for(i = 0; i < 4; i++) {
        printf("Digite as coordenadas do vertice %d (X Y): ", i + 1);
        scanf("%f %f", &x[i], &y[i]);
    }

    for(i = 0; i < 4; i++) {
        int prox = (i + 1) % 4;

        lados[i] = sqrt(
            pow(x[prox] - x[i], 2) +
            pow(y[prox] - y[i], 2)
        );
    }

    diag1 = sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2));
    diag2 = sqrt(pow(x[3] - x[1], 2) + pow(y[3] - y[1], 2));

    printf("\nComprimento dos lados:\n");
    for(i = 0; i < 4; i++) {
        printf("Lado %d = %.2f\n", i + 1, lados[i]);
    }

    if(fabs(lados[0] - lados[1]) < 0.001 &&
       fabs(lados[1] - lados[2]) < 0.001 &&
       fabs(lados[2] - lados[3]) < 0.001 &&
       fabs(diag1 - diag2) < 0.001) {

        printf("\nA figura e um quadrado.\n");
    }
    else {
        printf("\nA figura NAO e um quadrado.\n");
    }

    return 0;
}