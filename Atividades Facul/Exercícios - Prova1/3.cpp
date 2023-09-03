#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1;
	printf("Escolha um número\n");
	scanf("%d", &num1);
	printf("Foi informado o valor %d", num1);
}
