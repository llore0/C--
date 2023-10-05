//Escreva um programa que v� solicitando as idades dos alunos da sala at� que todos
//sejam informados (perguntar ao usu�rio se deseja informar a idade do pr�ximo aluno). Ao
//final apresentar a idade do mais novo, a idade do mais velho, Quantos alunos t�m mais de
//18 anos, quantos alunos t�m at� 18 anos, a m�dia aritm�tica e a mediana.

#include <stdio.h>
#include <algorithm>

int main() {
  // Declara as vari�veis
  int n = 0; // N�mero de alunos
  int idade = 0; // Idade do aluno atual
  int maisNovo = INT_MAX; // Idade do aluno mais novo
  int maisVelho = INT_MIN; // Idade do aluno mais velho
  int idadeMediana = 0; // Idade mediana
  int idadeAcima18 = 0; // N�mero de alunos com mais de 18 anos
  int idadeAte18 = 0; // N�mero de alunos com at� 18 anos

  // L� as idades dos alunos
  do {
    printf("Deseja informar a idade do pr�ximo aluno? (s/n): ");
    char resposta;
    scanf(" %c", &resposta);

    if (resposta == 's') {
      printf("Digite a idade do aluno: ");
      scanf("%d", &idade);

      // Atualiza as vari�veis
      if (idade < maisNovo) {
        maisNovo = idade;
      }
      if (idade > maisVelho) {
        maisVelho = idade;
      }
      n++;
    }
  } while (resposta == 's');

  // Calcula a m�dia aritm�tica
  float somaIdades = 0;
  for (int i = 0; i < n; i++) {
    somaIdades += idade;
  }
  float mediaAritmetica = somaIdades / n;

  // Calcula a mediana
  if (n % 2 == 0) {
    // O n�mero de alunos � par
    idadeMediana = (idade[n / 2] + idade[(n / 2) - 1]) / 2;
  } else {
    // O n�mero de alunos � �mpar
    idadeMediana = idade[n / 2];
  }

  // Conta o n�mero de alunos com mais de 18 anos
  for (int i = 0; i < n; i++) {
    if (idade[i] >= 18) {
      idadeAcima18++;
    }
  }

  // Conta o n�mero de alunos com at� 18 anos
  idadeAte18 = n - idadeAcima18;

  // Imprime os resultados
  printf("Idade do mais novo: %d\n", maisNovo);
  printf("Idade do mais velho: %d\n", maisVelho);
  printf("N�mero de alunos com mais de 18 anos: %d\n", idadeAcima18);
  printf("N�mero de alunos com at� 18 anos: %d\n", idadeAte18);
  printf("M�dia aritm�tica: %.2f\n", mediaAritmetica);
  printf("Mediana: %d\n", idadeMediana);

  return 0;
}

