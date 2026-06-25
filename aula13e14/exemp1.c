#include <stdio.h>

void main() {
    int contador = 1;
    int *ponteiro = &contador;
    printf("Contador &: %p", &contador);
    printf("Ponteiro &: %p", &ponteiro);

    printf("\n%p", *ponteiro);

}