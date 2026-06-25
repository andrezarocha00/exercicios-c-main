int numero() {
    return rand() %10;
}

int main(){
    int numero1, numero2, respostaUsuario, somaCorreta;
    int acertou = 1;

    srand(time(NULL));

    numero1 = numero();
    numero2 = numero();
    somaCorreta = numero1 + numero2;


    printf(" DESAFIO DE MATEMATICA \n");
    
while (acertou) {
        numero1 = numero();
        numero2 = numero();
        somaCorreta = numero1 + numero2;


    
    printf("QUANTO É %d + %d ?: ", numero1, numero2);
    scanf("%d", &respostaUsuario);

    if (respostaUsuario == somaCorreta) {
        printf("\n Parabéns! você acertou!\n");
    } else {
        printf("\nQue pena! O resultado correto era %d!\n ", somaCorreta);
        acertou = 0;
    }
}

return 0;
}