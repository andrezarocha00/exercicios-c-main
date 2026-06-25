#include <stdio.h>

void comissao(float *preco1, float *preco2) {
    *preco1 = *preco1 * 1.10;
    *preco2 = *preco2 * 1.10;
}

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

    comissao(&preco1, &preco2);

    printf("\nPrecos apos comissao de 10%%:\n");
    printf("Supermercado 1: %.2f\n", preco1);
    printf("Supermercado 2: %.2f\n", preco2);

    return 0;
}