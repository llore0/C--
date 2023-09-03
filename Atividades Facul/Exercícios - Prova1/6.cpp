#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float temp;
	
	printf("Escolha um valor em Celsius pra ser convertido em Fahrenheit\n");
	scanf("%f", &temp);
	
	printf("A sua temperatura em Celsius para Fahrenheit ficou : %.2f", temp * 1.8 + 32);
}
