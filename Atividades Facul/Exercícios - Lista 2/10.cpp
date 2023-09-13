#include <stdio.h>
#include <locale.h>

/*
	O sistema de avaliação de determinada disciplina é composto por três provas. A primeira
	prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
	média para aprovação é 6.0, faça um algoritmo para calcular a média final de um aluno
	desta disciplina e dizer se o aluno foi aprovado ou não
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float test1, test2, test3;
	printf("Informe o resultado das suas três avaliações\n");
	scanf("%f", &test1);
	scanf("%f", &test2);
	scanf("%f", &test3);
	test1 = (test1 * 2 + test2 * 3 + test3 * 5) / 3;
	
	if(test1 >= 6) {
		printf("O aluno foi aprovado %f", test1);
	} else {
		printf("O aluno não foi aprovado");
	}
}
