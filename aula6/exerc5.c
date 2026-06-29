#include <stdio.h>

float diam(float raio) {
    return 2 * raio;
}

float circunferencia(float raio) {
    return 2 * 3.14159 * raio;
}

float area(float raio) {
    return 3.14159 * raio * raio;
}

int main() {
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Raio: %.2f\n", raio);
    printf("Diametro: %.2f\n", diam(raio));
    printf("Circunferencia: %.2f\n", circunferencia(raio));
    printf("Area: %.2f\n", area(raio));

    return 0
}