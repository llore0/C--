// Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o número

#include <stdio.h>

int main() {
	char texto[1000];
	
	printf("Escreva algo: ");
	gets(texto);
	
	for(int num = 1; num <= 100; num++) {
		printf("%d - %s\n", num, texto);
	}
}
