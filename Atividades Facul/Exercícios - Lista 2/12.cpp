#include <stdio.h>
#include <locale.h>

/*
	Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e
	90, ou n�o
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num1;
	printf("Informe um n�mero: ");
	scanf("%f", &num1);
	
	if(num1 > 20 && num1 < 90) {
		printf("O n�mero digitado est� compreendido entre 20 e 90\n");
	} else {
		printf("O n�mero digitado n�o est� compreendido entre 20 e 90\n");
	}
}
