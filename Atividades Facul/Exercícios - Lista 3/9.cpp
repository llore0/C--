// Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
// de vezes que o texto "Hello World!" será impresso na tela, um em cada linha.

#include <stdio.h> 

int main() {
	int loop;
	
	printf("Quantas vezes voce quer que o programa repita a frase 'Hellow, World!': ");
	scanf("%d", &loop);
	
	for (int i = 0; i < loop; i++) {
		printf("%d - Hellow, World!\n", i + 1);
	}
}
