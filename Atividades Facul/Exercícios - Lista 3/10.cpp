/* Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que
indicar� a quantidade de vezes que a palavra digitada ser� impressa na tela, um em cada
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
