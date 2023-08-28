#include <stdio.h> // Carregando a biblioteca Standard Inpu Output para usarmos printf e scanf
#include <locale.h>// Carregando a biblioteca locale que utiliza as configuracoes do windows
/* Versao01:
 Escreva um algoritmo que solicite ao usu�rio duas notas e ao final apresente a mensagem
 de aluno Aprovado ou n�o conforme a m�dia aritmetica das duas notas considerando que a 
 m�dia de aprova�ao seja maior ou igual a sete (Media >= 7)
 
 Versao02:
 Implementar no algoritmo a funcionalidade de realizar o exame final
 Ser� solicitada a nota do exame final e a nova m�dia ser� calculada da seguinte forma:
 NovaMedia = (MediaAnterior + NotaExameFinal) / 2
 Se maior ou igual a 7.0 entao: Aprovado apos o exame final
 Se n�o: Reprovado no exame final
 
 Versao03:
 O cliente agora quer configurar a m�dia para aprova��o na faculdade, ou seja, n�o deve
 mais ser a m�dia 7.0 fixa. O programa dever� solicitar ao usu�rio a m�dia a ser utilizada
 e passar a calcular conforme a configura��o do usu�rio
 
 Versao04:
 O aluno somente poder� realizar exame final se a m�dia for pelo menos a nota 3.0 (tr�s)
 
 Versao05:
 Agora o cliente quer aplicar cinco provas em vez de apenas duas
 Obs.: N�o pode usar mais que quatro vari�veis
 
 Versao06:
 O cliente agora quer configurar a m�dia m�nima para prosseguir p/ exame final, ou seja, 
 n�o deve mais ser a m�dia m�nima 3.0 (fixa). O programa dever� solicitar ao usu�rio a 
 m�dia m�nima pra prosseguir a ser utilizada e passar a calcular conforme a configura��o do usu�rio
*/

int main() {  //Estamos abrindo o m�todo principal (main) do programa
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
  
  printf("Qual a m�dia m�nima da sua faculdade?");
  scanf("%d", &MediaMin);

// Sa�da
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
}  //Estamos fechando o m�todo principal (main) do programa
