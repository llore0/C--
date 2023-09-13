#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
	número informado é positivo, negativo ou nulo (zero)
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um valor\n");
	scanf("%f", &valor);
	
	if (valor > 0) {
		printf("O valor informado é positivo");
	} else if (valor < 0) {
		printf("O valor informado é negativo");
	} else {
		printf("O valor informado é nulo");
	}
}
