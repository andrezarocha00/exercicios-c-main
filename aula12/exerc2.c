#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    int i, tamanho;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    tamanho = strlen(nome);

    for(i = 0; i < tamanho; i++) {
        nome[i] = tolower(nome[i]);
    }

    printf("Quantidade de letras: %d\n", tamanho);

    printf("Nome invertido: ");
    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}