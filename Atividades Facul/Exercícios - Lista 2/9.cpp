#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia dois n�meros inteiros e realize a adi��o; caso o resultado
	seja maior que 10, imprima o quadrado do resultado, caso contr�rio, imprima a metade dele
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Informe dois n�meros\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	num1 = num1 + num2;
	
	if(num1 > 10) {
		printf("O quadrado da adi��o dos dois n�mero(%d) � %d\n", num1, num1 * num1);
	} else if (num1 <= 10) {
		printf("A metade da adi��o dos dois n�mero(%d) � %d\n", num1, num1 / 2);
	}
}
