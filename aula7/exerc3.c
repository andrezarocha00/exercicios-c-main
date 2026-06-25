#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar(int c, int n) {
    if (c == n) {
        return 1; // Acertou
    } else {
        return 0; // Errou
    }
}
int main() {
    int chute;
    int limite = 10;

    srand(time(NULL));
    int numero_secreto  = rand() % limite;
    
   printf("Bem-vindo ao jogo de adivinhacao!\n");

    do {
        printf("Digite um numero (0 a 9): ");
        scanf("%d", &chute);

        if (verificar(chute, numero_secreto)) {
            printf("Parabens! Voce acertou o numero %d!\n", numero_secreto);
        } else {
            if (chute > numero_secreto) {
                printf("Muito alto! Tente novamente.\n");
            } else {
                printf("Muito baixo! Tente novamente.\n");
            }
        }

    } while (chute != numero_secreto);
        return 0;
} 