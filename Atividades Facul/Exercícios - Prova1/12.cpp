#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num;
	char res[1];
	
	printf("Escolha um n�mero\n");
	scanf("%f", &num);
	
	printf("Deseja fazer opera��es matem�ticas com o seu n�mero(S ou N)?\n");
	scanf("%s", &res);
	res[0] = tolower(res[0]);
	
	if (strcmp(res, "s") == 0 ) {
		printf("Deseja dobrar(D), elevar ao quadrado(Q) ou elevar ao cubo(C)\n");
		scanf("%s", &res);
		res[0] = tolower(res[0]);
		
		if(strcmp(res, "d") == 0) {
			printf("O dobro do seu n�mero �: %.2f", num * 2);
		} else if (strcmp(res, "q") == 0) {
			printf("O quadrado do seu n�mero �: %.2f", num * num);
		} else if (strcmp(res, "c") == 0) {
			printf("O quadrado do seu n�mero �: %.2f", num * num * num);
		}
	} else if (strcmp(res, "n") == 0) {
		printf("OK!");
	} else {
		printf("Valor inv�lido!");
	}
}
