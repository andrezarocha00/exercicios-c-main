#include <stdio.h>
#define TAM 6

int main(){
    int choveu_dia1 [0];
	int choveu_dia2 [1];
	int choveu_dia3 [2];
	int choveu_dia4 [3];
	int choveu_dia5 [4];
	int choveu_dia6 [5];
	int choveu_dia7 [6];


	int escolha[TAM];
	int responda_sim = 1;
	int responda_nao = 0;

	printf(("Responda as seguintes perguntas com 1 para sim e 0 para nao:\n"));

	for(int i = 0; i < TAM; i++){
		printf(("Porcentagem de dias que choveu "));
		scanf("%d", &escolha[i]);
		if(escolha[i] == 1){
			responda_sim++;
		}if(escolha[i] == 0){
			responda_nao++;
		}
	}
	printf(("Resultado: %d\n de dias chuvosos"), responda_sim, responda_nao);
}