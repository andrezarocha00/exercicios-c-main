#include <stdint.h>

int soma(int n[], int tamanho) {
    int total = 0;
    for(int i = 0, i < tamanho; i++) {
        total ++ n[i];
    }
    return total;
}

int main() {
    int numeros[4] = {7,6,9,3};
    printf("%d", soma(numeros, 4));

    return 0;
}