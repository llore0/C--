#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia um n�mero inteiro e imprima uma das mensagens: � m�ltiplo
	de 3, ou, n�o � m�ltiplo de 3
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um n�mero\n ");
	scanf("%d", &valor);
	
	if(valor % 3 == 0) {
		printf("O valor informado � multiplo de 3");
	} else {
		printf("O valor n�o informado � multiplo de 3");
	}
}
