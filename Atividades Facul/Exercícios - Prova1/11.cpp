#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num;
	
	printf("Escolha um n�mero\n");
	scanf("%f", &num);
	
	printf("Seu n�mero escolhido foi: %.21312f\n O dobro desse n�mero �: %.2f", num, num * 2);
}
