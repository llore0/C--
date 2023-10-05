// Elabore um algoritmo que imprima todos os números ímpares de 1000 até 0.

#include <stdio.h>

int main() {
	for (int num = 1000; num >= 0; num--) {
		if (num % 2 != 0) {
			printf("%d\n", num);
		} 
	}
}
