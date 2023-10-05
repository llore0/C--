//. Elabore um algoritmo que solicite N n�meros reais e quando o usu�rio informar o valor
//nulo 0 (zero) o programa ordene e mostre todos os n�meros informados de forma crescente

#include <stdio.h>
#include <algorithm>

int main() {
  // Declara as vari�veis
  int n;
  float numeros[100];
  int i = 0;

  // L� o n�mero de n�meros a serem lidos
  printf("Digite o numero de numeros a serem lidos: ");
  scanf("%d", &n);

  // L� os n�meros do usu�rio
  while (i < n) {
    printf("Digite o numero %d: ", i + 1);
    scanf("%f", &numeros[i]);
    i++;
  }

  // Ordena os n�meros
  std::sort(numeros, numeros + n);

  // Imprime os n�meros ordenados
  for (int i = 0; i < n; i++) {
    printf("%f\n", numeros[i]);
  }

  return 0;
}

