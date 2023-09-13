#include <stdio.h>
#include <locale.h>

/*
	Refazer o exercício anterior, solicitando antes o múltiplo a ser testado
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Escolha dois números que você deseja descobrir se o primeiro é multiplo do segundo\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	if (num1 % num2 == 0) {
		printf("O primeiro valor é multiplo do segundo");
	} else {
		printf("O primeiro valor não é multiplo do segundo");
	}
}
