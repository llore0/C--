#include <stdio.h>
#include <locale.h>

/*
	Refazer o exerc�cio anterior, solicitando antes o m�ltiplo a ser testado
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Escolha dois n�meros que voc� deseja descobrir se o primeiro � multiplo do segundo\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	if (num1 % num2 == 0) {
		printf("O primeiro valor � multiplo do segundo");
	} else {
		printf("O primeiro valor n�o � multiplo do segundo");
	}
}
