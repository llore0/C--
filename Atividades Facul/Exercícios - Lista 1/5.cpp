#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num1;
	printf("Escolha um n�mero real\n");
	scanf("%f", &num1);
	printf("O n�mero escolhido foi %.2f", num1);
}
