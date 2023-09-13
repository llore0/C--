#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e
	90, ou não
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num1;
	printf("Informe um número: ");
	scanf("%f", &num1);
	
	if(num1 > 20 && num1 < 90) {
		printf("O número digitado está compreendido entre 20 e 90\n");
	} else {
		printf("O número digitado não está compreendido entre 20 e 90\n");
	}
}
