#include <stdio.h>

int main() {
	int num1, num2;
	printf("Escolha dois numeros inteiros\n");
	scanf("%d\n", &num1);
	scanf("%d", &num2);
	
	printf("O numeros %d e %d somados correspondem a %d", num1, num2, num1 + num2);
}
