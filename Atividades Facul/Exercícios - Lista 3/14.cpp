#include <limits>
#include <stdio.h>

int main() {
  // Declara as variáveis
  float numeros[10];
  float maior = -std::numeric_limits<float>::infinity();
  float menor = std::numeric_limits<float>::infinity();

  // Lê os números do usuário
  for (int i = 0; i < 10; i++) {
    printf("Digite o numero %d: ", i + 1);
    scanf("%f", &numeros[i]);

    // Atualiza os valores de maior e menor
    if (numeros[i] > maior) {
      maior = numeros[i];
    }
    if (numeros[i] < menor) {
      menor = numeros[i];
    }
  }

  // Imprime o maior e o menor
  printf("O maior numero e %f\n", maior);
  printf("O menor numero e %f\n", menor);

  return 0;
}

