#include <stdio.h>

int main() {
    char nome[50];
    float preco1, preco2;

    printf("Digite o nome do produto: ");
    scanf("%s", nome);

    printf("Digite o preco no supermercado 1: ");
    scanf("%f", &preco1);

    printf("Digite o preco no supermercado 2: ");
    scanf("%f", &preco2);

    printf("\nProduto: %s\n", nome);
    printf("Preco supermercado 1: %.2f\n", preco1);
    printf("Preco supermercado 2: %.2f\n", preco2);

    return 0;
}