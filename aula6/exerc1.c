#include <stdio.h>

void regressiva(int numero) {
    int fim = 0;
    for (; numero > fim; numero--) {
        printf("Contagem regressiva: %d\n", numero);
   }
}

int main() {
    int n;

    printf("Digite um número para a contagem regressiva: ");
    scanf("%d", &n);


 /* chamando a função*/   
    regressiva(n);
    return 0;
}