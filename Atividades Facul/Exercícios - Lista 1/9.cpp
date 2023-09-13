#include <stdio.h>
#include <string.>

int main() {
	char cor[100];
	printf("Escolha uma cor\n");
	fgets(cor, 100, stdin);
	
	printf("A sua cor escolhida foi: %s", cor);
}
