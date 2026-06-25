#include <stdio.h>

void imprime(int);

int main() {
    int notas[4] = {0};
    int total = 0;
    float media = 0.0;
    char nome[0], disciplina[1];
    printf("Digite o nome do aluno e a disciplina: ");
    scanf("%s %s", nome, disciplina);

    for(int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        total += notas[i];
    }
    media = total / 4.0;
    printf("Otavio obteve a média: %d\n", media);

    return 0;

}

