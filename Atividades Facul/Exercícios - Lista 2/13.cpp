#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que leia dois n�meros e imprima qual � maior, qual � menor, ou se
	s�o iguais
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Informe um n�mero: ");
	scanf("%d", &num1);
	
	printf("Informe outro n�mero: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
        printf("\n%d � maior do que %d\n", num1, num2);
    } else if (num2 > num1) {
        printf("\n%d � maior do que %d\n", num2, num1);
    } else {
        printf("\n%d e %d s�o iguais\n", num1, num2);
    }
}
