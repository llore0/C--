#include <stdio.h>
#include <locale.h>

/*
	O sistema de avalia��o de determinada disciplina � composto por tr�s provas. A primeira
	prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
	m�dia para aprova��o � 6.0, fa�a um algoritmo para calcular a m�dia final de um aluno
	desta disciplina e dizer se o aluno foi aprovado ou n�o
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float test1, test2, test3;
	printf("Informe o resultado das suas tr�s avalia��es\n");
	scanf("%f", &test1);
	scanf("%f", &test2);
	scanf("%f", &test3);
	test1 = (test1 * 2 + test2 * 3 + test3 * 5) / 3;
	
	if(test1 >= 6) {
		printf("O aluno foi aprovado %f", test1);
	} else {
		printf("O aluno n�o foi aprovado");
	}
}
