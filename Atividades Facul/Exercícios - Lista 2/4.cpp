#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
	n�mero informado � positivo, negativo ou nulo (zero)
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um valor\n");
	scanf("%f", &valor);
	
	if (valor > 0) {
		printf("O valor informado � positivo");
	} else if (valor < 0) {
		printf("O valor informado � negativo");
	} else {
		printf("O valor informado � nulo");
	}
}
