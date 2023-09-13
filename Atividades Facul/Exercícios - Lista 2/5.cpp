#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
	de 3, ou, não é múltiplo de 3
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um número\n ");
	scanf("%d", &valor);
	
	if(valor % 3 == 0) {
		printf("O valor informado é multiplo de 3");
	} else {
		printf("O valor não informado é multiplo de 3");
	}
}
