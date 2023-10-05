// Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos. 

#include <stdio.h>

int Soma(int inicial, int final) {
	int soma = 0;
	for (int num = inicial; num <= final; num++) {
		soma += num;
	}
	return soma;
}

int main() {
	printf("Um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos\n");
	int soma = Soma(0, 99);
	printf("A soma e: %d\n", soma);
}
