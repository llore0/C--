// Elabore um algoritmo que imprima todos os n�meros pares inteiros de 1 at� 1000.

#include <stdio.h>

int main() {
	printf("Todos os numeros pares inteiro, de 0 a 1000\n");
	for (int num = 1; num <= 1000; num++) {
		if (num % 2 == 0) {
			printf("%d\n", num);
		}
	}
}
