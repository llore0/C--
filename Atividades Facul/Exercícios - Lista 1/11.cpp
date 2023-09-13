#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num;
	
	printf("Escolha um número\n");
	scanf("%f", &num);
	
	printf("Seu número escolhido foi: %.21312f\n O dobro desse número é: %.2f", num, num * 2);
}
