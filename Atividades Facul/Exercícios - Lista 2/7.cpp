#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como
	par ou ímpar
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	printf("Informe um número\n ");
	scanf("%i", &num1);
	
	if(num1 % 2 == 0) {
		printf("O número informado é par");
	} else {
		printf("O número informado é ímpar");
	}
}
