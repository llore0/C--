#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade
	desse n�mero, caso contr�rio, imprimir o dobro do n�mero
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num1;
	printf("Informe um n�mero\n ");
	scanf("%f", &num1);
	
	if(num1 > 20) {
		printf("A metade de %.2f �: %.2f", num1, num1 / 2);
	} else if (num1 <= 20) {
		printf("O dobro de %.2f �: %.2f", num1, num1 * 2);
	}
}
