#include <stdio.h>

int main() {
    float notas[5];
    float soma = 0;
    float media = 0;
    char nomes[5][20];

    for(int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%19s", nomes[i]);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 5.0;
    printf("\n A media dos alunos foram: %.2f\n", media);
    printf("Alunos que ficaram na media ou acima:\n");

    for(int i = 0; i < 5; i++) {
        if(notas[i] >= media) {
            printf("%s(Nota: %.2f)\n", nomes[i], notas[i]);
        }
    }
    return 0;
}