/* Elabore um algoritmo que solicite ao usuário uma palavra e um número inteiro que
indicará a quantidade de vezes que a palavra digitada será impressa na tela, um em cada
linha.
*/

#include <stdio.h>

int main() {
	char text[255];
	int num;
	
	printf("Escreva uma palavra/frase: ");
	gets(text);
	printf("Agora escolha quantas vezes voce quer que essa palavra repita: ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		printf("%d - %s\n", i + 1, text);
	}
}
