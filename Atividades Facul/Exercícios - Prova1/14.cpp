#include <stdio.h>

int main() {
	float num1, num2;
	printf("Escolha dois numeros reais\n");
	scanf("%f\n", &num1);
	scanf("%f", &num2);
	
	printf("A soma dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 + num2);
	printf("A subtracao dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 - num2);
	printf("O produto dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 * num2);
	printf("A divisao dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 / num2);
	int resto = (int)num1 % (int)num2;
	printf("O resto da divisao dos numeros %.2f e %.2f corresponde a %d", num1, num2, resto);
}
