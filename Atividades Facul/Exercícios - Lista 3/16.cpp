//Escreva um programa que vá solicitando as idades dos alunos da sala até que todos
//sejam informados (perguntar ao usuário se deseja informar a idade do próximo aluno). Ao
//final apresentar a idade do mais novo, a idade do mais velho, Quantos alunos têm mais de
//18 anos, quantos alunos têm até 18 anos, a média aritmética e a mediana.

#include <stdio.h>
#include <algorithm>

int main() {
  // Declara as variáveis
  int n = 0; // Número de alunos
  int idade = 0; // Idade do aluno atual
  int maisNovo = INT_MAX; // Idade do aluno mais novo
  int maisVelho = INT_MIN; // Idade do aluno mais velho
  int idadeMediana = 0; // Idade mediana
  int idadeAcima18 = 0; // Número de alunos com mais de 18 anos
  int idadeAte18 = 0; // Número de alunos com até 18 anos

  // Lê as idades dos alunos
  do {
    printf("Deseja informar a idade do próximo aluno? (s/n): ");
    char resposta;
    scanf(" %c", &resposta);

    if (resposta == 's') {
      printf("Digite a idade do aluno: ");
      scanf("%d", &idade);

      // Atualiza as variáveis
      if (idade < maisNovo) {
        maisNovo = idade;
      }
      if (idade > maisVelho) {
        maisVelho = idade;
      }
      n++;
    }
  } while (resposta == 's');

  // Calcula a média aritmética
  float somaIdades = 0;
  for (int i = 0; i < n; i++) {
    somaIdades += idade;
  }
  float mediaAritmetica = somaIdades / n;

  // Calcula a mediana
  if (n % 2 == 0) {
    // O número de alunos é par
    idadeMediana = (idade[n / 2] + idade[(n / 2) - 1]) / 2;
  } else {
    // O número de alunos é ímpar
    idadeMediana = idade[n / 2];
  }

  // Conta o número de alunos com mais de 18 anos
  for (int i = 0; i < n; i++) {
    if (idade[i] >= 18) {
      idadeAcima18++;
    }
  }

  // Conta o número de alunos com até 18 anos
  idadeAte18 = n - idadeAcima18;

  // Imprime os resultados
  printf("Idade do mais novo: %d\n", maisNovo);
  printf("Idade do mais velho: %d\n", maisVelho);
  printf("Número de alunos com mais de 18 anos: %d\n", idadeAcima18);
  printf("Número de alunos com até 18 anos: %d\n", idadeAte18);
  printf("Média aritmética: %.2f\n", mediaAritmetica);
  printf("Mediana: %d\n", idadeMediana);

  return 0;
}

