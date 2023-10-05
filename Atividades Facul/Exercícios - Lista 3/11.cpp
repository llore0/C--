/*
	Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
	n�meros a serem lidos. Em seguida, leia n n�meros (conforme o valor informado
	anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados.
*/

#include <stdio.h>

int main() {
  // L� o n�mero de n�meros a serem lidos
  int num;
  printf("Digite o numero de numeros a serem lidos: ");
  scanf("%d", &num);

  // L� os n�meros
  int soma;
  for (float i = 0; i < num; i++) {
  		printf("Digite o numero %d: ", i + 1);
  		int numLoop;
		scanf("%d", &numLoop);
		soma += numLoop;
  }

  // Imprime a soma e a m�dia
  printf("A soma ficou: %d \ne a media ficou: %.2f\n", soma, (float)soma / num);

  return 0;
}

