/*
	Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
	números a serem lidos. Em seguida, leia n números (conforme o valor informado
	anteriormente) e imprima a soma e a média aritmética dos números informados.
*/

#include <stdio.h>

int main() {
  // Lê o número de números a serem lidos
  int num;
  printf("Digite o numero de numeros a serem lidos: ");
  scanf("%d", &num);

  // Lê os números
  int soma;
  for (float i = 0; i < num; i++) {
  		printf("Digite o numero %d: ", i + 1);
  		int numLoop;
		scanf("%d", &numLoop);
		soma += numLoop;
  }

  // Imprime a soma e a média
  printf("A soma ficou: %d \ne a media ficou: %.2f\n", soma, (float)soma / num);

  return 0;
}

