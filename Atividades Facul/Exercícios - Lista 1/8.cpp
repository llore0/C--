#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[1];
	printf("Informe seu nome\n");
	scanf("%s", &nome);
	
	nome[0] = toupper(nome[0]);
	
	// Imprime só a primeira letra do nome
	printf("A primeira letra do seu nome é: %c", nome[0]);
}

