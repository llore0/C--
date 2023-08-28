#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float temperatura;
	char pergunta[3];
	
	printf("Escreva a temperatura em Graus Celcius: ");
	scanf("%f", &temperatura);
	printf("A temperatura em Graus Celcius é: %.2f\n", temperatura);
	
	printf("Deseja converter para outra medida de temperatura?\n");
	scanf("%s", &pergunta);
	
	if (strcmp(pergunta, "sim") == 0 || strcmp(pergunta, "Sim") == 0 || strcmp(pergunta, "s") == 0) {
		printf("Vai querer converter para Kelvin ou Fahrenheit?\n");
		scanf("%s", &pergunta);
		if (strcmp(pergunta, "Kelvin") == 0 || strcmp(pergunta, "k") == 0) {
			temperatura = temperatura + 273,15;
			printf("A temperatura em Graus Kelvin é: %.2f\n", temperatura);
		} else if (strcmp(pergunta, "Fahrenheit") == 0 || strcmp(pergunta, "f") == 0) {
			temperatura = (9 * temperatura + 160) / 5;
			printf("A temperatura em Graus Fahrenheit é: %.2f\n", temperatura);
		} else {
			printf("Valor inválido!");
		}
	}else if (strcmp(pergunta, "nao") == 0 || strcmp(pergunta, "Nao") == 0 || strcmp(pergunta, "n") == 0) {
		printf("Ok!");
	} else {
		printf("Por favor, responda com 'sim'!");
		
	}
}
