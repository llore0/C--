//. Elabore um algoritmo que solicite N números reais e quando o usuário informar o valor
//nulo 0 (zero) o programa ordene e mostre todos os números informados de forma crescente

#include <stdio.h>
#include <algorithm>

int main() {
  // Declara as variáveis
  int n;
  float numeros[100];
  int i = 0;

  // Lê o número de números a serem lidos
  printf("Digite o numero de numeros a serem lidos: ");
  scanf("%d", &n);

  // Lê os números do usuário
  while (i < n) {
    printf("Digite o numero %d: ", i + 1);
    scanf("%f", &numeros[i]);
    i++;
  }

  // Ordena os números
  std::sort(numeros, numeros + n);

  // Imprime os números ordenados
  for (int i = 0; i < n; i++) {
    printf("%f\n", numeros[i]);
  }

  return 0;
}

