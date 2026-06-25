#include <stdio.h>

void comissao(float *preco1, float *preco2) {
    *preco1 = *preco1 * 1.10;
    *preco2 = *preco2 * 1.10;
}

int main() {
    float preco1 = 100;
    float preco2 = 200;

    comissao(&preco1, &preco2);

    return 0;
}