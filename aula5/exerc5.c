#include <stdio.h>

int main() {
    char modo = 'I';

    for (; modo != 'F'; ) {
        printf("Digite o modo (L - Lavar, E - Enxaguar, S - Secar, F - Fim): ");
        scanf(" %c", &modo);

        switch (modo) {
            case 'L':
                printf("Lavando\n");
                break;

            case 'E':
                printf("Enxaguando\n");
                break;

            case 'S':
                printf("Secando\n");
                break;

            case 'F':
                printf("Fim\n");
                break;

            default:
                printf("Modo invalido!\n");
        }
    }

    printf("Finalizado\n");

    return 0;
}