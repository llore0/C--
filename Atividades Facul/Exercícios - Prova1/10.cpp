#include <stdio.h>

int main() {
	char verdura[100], fruta[100];
	printf("Escolha uma verdura\n");
	fgets(verdura, 100, stdin);
	
	printf("Escolha uma fruta\n");
	fgets(fruta, 100, stdin);
	
	printf("A sua verdura escolhida foi: %s\n A sua fruta escolhida foi %s", verdura, fruta);
}
