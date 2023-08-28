#include <stdio.h> // Carregando a biblioteca Standard Inpu Output para usarmos printf e scanf
#include <locale.h>// Carregando a biblioteca locale que utiliza as configuracoes do windows
/* Versao01:
 Escreva um algoritmo que solicite ao usuário duas notas e ao final apresente a mensagem
 de aluno Aprovado ou não conforme a média aritmetica das duas notas considerando que a 
 média de aprovaçao seja maior ou igual a sete (Media >= 7)
 
 Versao02:
 Implementar no algoritmo a funcionalidade de realizar o exame final
 Será solicitada a nota do exame final e a nova média será calculada da seguinte forma:
 NovaMedia = (MediaAnterior + NotaExameFinal) / 2
 Se maior ou igual a 7.0 entao: Aprovado apos o exame final
 Se não: Reprovado no exame final
 
 Versao03:
 O cliente agora quer configurar a média para aprovação na faculdade, ou seja, não deve
 mais ser a média 7.0 fixa. O programa deverá solicitar ao usuário a média a ser utilizada
 e passar a calcular conforme a configuração do usuário
 
 Versao04:
 O aluno somente poderá realizar exame final se a média for pelo menos a nota 3.0 (três)
 
 Versao05:
 Agora o cliente quer aplicar cinco provas em vez de apenas duas
 Obs.: Não pode usar mais que quatro variáveis
 
 Versao06:
 O cliente agora quer configurar a média mínima para prosseguir p/ exame final, ou seja, 
 não deve mais ser a média mínima 3.0 (fixa). O programa deverá solicitar ao usuário a 
 média mínima pra prosseguir a ser utilizada e passar a calcular conforme a configuração do usuário
*/

int main() {  //Estamos abrindo o método principal (main) do programa
// Entrada
  float Nota, Soma, MediaAprovacao, MediaMin, QuantidaProva;
  setlocale(LC_ALL, "Portuguese"); // Para usarmos padrao Brasileiro
  
  printf(" Informe a media para aprovacao: ");
  scanf("%f", &MediaAprovacao);
  
  printf(" Informe a 1. nota: ");
  scanf("%f", &Nota);
  Soma = Nota;
  printf(" Informe a 2. nota: ");
  scanf("%f", &Nota);
  Soma = Soma + Nota;
  printf(" Informe a 3. nota: ");
  scanf("%f", &Nota);
  Soma = Soma + Nota;
  printf(" Informe a 4. nota: ");
  scanf("%f", &Nota); 
  Soma = Soma + Nota;
  printf(" Informe a 5. nota: ");
  scanf("%f", &Nota);
  Soma = Soma + Nota;
  
  printf("Qual a média mínima da sua faculdade?");
  scanf("%d", &MediaMin);

// Saída
  if ((Soma) / 5 < MediaMin) {
  	printf("\n Rprovacao direta! ");
  }
	else if ((Soma) / 5 >= MediaAprovacao) {
	  printf("\n Parabens por sua aprovacao! ");
	}
  else {
    printf("\n Precisara realizar o exame final! ");
    printf("\n Informe a nota do exame final: ");
    scanf("%f", &Nota);    
  
    if (((Nota + ((Soma) / 5)) / 2) >= MediaAprovacao) {
	    printf("\n Aprovacao no exame final! ");
	  }
    else {
      printf("\n Reprovacao no exame final! ");  
    }
    
  }
}  //Estamos fechando o método principal (main) do programa
