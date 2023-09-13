#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado
	seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Informe dois números\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	num1 = num1 + num2;
	
	if(num1 > 10) {
		printf("O quadrado da adição dos dois número(%d) é %d\n", num1, num1 * num1);
	} else if (num1 <= 10) {
		printf("A metade da adição dos dois número(%d) é %d\n", num1, num1 / 2);
	}
}
