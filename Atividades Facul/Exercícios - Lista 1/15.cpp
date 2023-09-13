#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float temp;
	char quizz[1];
	
	printf("Digite um valor para a temperatura\n");
	scanf("%f", &temp);
	
	printf("Você deseja converter para Graus Celsius(C) ou Fahrenheit(F)?\n");
	scanf("%s", &quizz);
	
	quizz[0] = tolower(quizz[0]);
	
	if (strcmp(quizz, "c") == 0) {
		printf("A temperatura em Graus Celsius: %.2f", temp);
	} else if (strcmp(quizz, "f") == 0) {
		printf("A temperatura em Graus Fahrenheit: %.2f", temp = (9 * temp + 160) / 5);
	}
}
