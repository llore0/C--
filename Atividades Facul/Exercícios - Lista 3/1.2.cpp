// Elabore um algoritmo que imprima na tela lado a lado o texto "Hello World!" 10 vezes.

#include <stdio.h>

int main() {
    char escolha[255];
    int loop;

    printf("Escreva algo que voce queria ver sendo impresso, e quantas vezes voce quer que esse processo repita: \n");
    gets(escolha);
    scanf("%d", &loop);

    for(int i = 0; i < loop; i++) {
    	printf("%s\n", escolha);
    }
}
