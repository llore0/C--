#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se
	são iguais
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Informe um número: ");
	scanf("%d", &num1);
	
	printf("Informe outro número: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
        printf("\n%d é maior do que %d\n", num1, num2);
    } else if (num2 > num1) {
        printf("\n%d é maior do que %d\n", num2, num1);
    } else {
        printf("\n%d e %d são iguais\n", num1, num2);
    }
}
