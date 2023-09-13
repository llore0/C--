#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float media_aprovacao;
    char nome[100], sexo;
    float nota1, nota2, nota3;
    float media;

    printf("Informe a média para aprovação: ");
    scanf("%f", &media_aprovacao);

    printf("Informe o nome do(a) aluno(a): ");
    scanf(" %[^\n]", nome);

    printf("Informe o sexo do(a) aluno(a) (M/F): ");
    scanf(" %c", &sexo);

    printf("Informe as três notas do(a) aluno(a):\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    if (media >= media_aprovacao) {
        if (sexo == 'M' || sexo == 'm') {
            printf("O aluno %s foi aprovado com média %.2f\n", nome, media);
        } else if (sexo == 'F' || sexo == 'f') {
            printf("A aluna %s foi aprovada com média %.2f\n", nome, media);
        }
    } else {
        if (sexo == 'M' || sexo == 'm') {
            printf("O aluno %s foi reprovado com média %.2f\n", nome, media);
        } else if (sexo == 'F' || sexo == 'f') {
            printf("A aluna %s foi reprovada com média %.2f\n", nome, media);
        }
    }

    return 0;
}

