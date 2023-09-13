#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float peso1, peso2;
    char nome1[100], nome2[100];

    printf("Informe o nome da primeira pessoa: ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Informe o peso da primeira pessoa: ");
    scanf("%f", &peso1);

    getchar(); // Limpar o buffer de nova linha

    printf("Informe o nome da segunda pessoa: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Informe o peso da segunda pessoa: ");
    scanf("%f", &peso2);

    if (peso1 > peso2) {
        printf("A pessoa com o nome %s é mais pesada\n", nome1);
    } else if (peso2 > peso1) {
        printf("A pessoa com o nome %s é mais pesada\n", nome2);
    } else {
        printf("Ambas as pessoas têm o mesmo peso\n");
    }

    return 0;
}

