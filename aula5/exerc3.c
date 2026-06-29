#include <stdio.h>
#include <math.h>

int main() {
    float x, y, res;

    printf("Digite um valor: ");
    scanf("%f", &x);

    printf("y: ");
    scanf("%f", &y);

    res = pow(x, y);

    printf("Resultado: %.1f\n", res);

    return 0;
}