#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como
	par ou �mpar
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	printf("Informe um n�mero\n ");
	scanf("%i", &num1);
	
	if(num1 % 2 == 0) {
		printf("O n�mero informado � par");
	} else {
		printf("O n�mero informado � �mpar");
	}
}
