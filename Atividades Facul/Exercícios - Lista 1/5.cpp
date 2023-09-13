#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num1;
	printf("Escolha um número real\n");
	scanf("%f", &num1);
	printf("O número escolhido foi %.2f", num1);
}
