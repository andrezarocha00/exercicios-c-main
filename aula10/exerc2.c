#include <stdio.h>
#include <string.h>



int main() {
    char senha [10];
    printf("Digite sua senha de 8 carctreres: ");
    scanf("%s", senha);

    int tamanho = strlen(senha);
    printf("A sua senha tem %d caracteres\n", tamanho);

    if (strlen(senha) >= 8) {
        printf("A sua senha é forte\n");
    } else {
        printf("Sua senha precisa de oito ou mais carcteres\n");
}
    return 0;
}