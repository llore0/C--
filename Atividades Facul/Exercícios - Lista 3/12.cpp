/*
	Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
	registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N
	pessoas e ao final apresentar o nome da pessoa mais velha
*/

#include <stdio.h>

int main() {
  // Lê o número de registros a serem lidos
  int n;
  printf("Digite o numero de registros a serem lidos: ");
  scanf("%d", &n);

  // Lê os registros
  struct pessoa {
    char nome[100];
    int idade;
  } pessoas[n];
  for (int i = 0; i < n; i++) {
    printf("Digite o nome da pessoa %d: \n", i + 1);
    gets(pessoas[i].nome);
    printf("Digite a idade da pessoa %d: \n", i + 1);
    scanf("%d", &pessoas[i].idade);
  }

  // Encontra a pessoa mais velha
  int pessoaMaisVelha = 0;
  for (int i = 1; i < n; i++) {
    if (pessoas[i].idade > pessoas[pessoaMaisVelha].idade) {
      pessoaMaisVelha = i;
    }
  }

  // Imprime o nome da pessoa mais velha
  printf("A pessoa mais velha e %s\n", pessoas[pessoaMaisVelha].nome);

  return 0;
}

