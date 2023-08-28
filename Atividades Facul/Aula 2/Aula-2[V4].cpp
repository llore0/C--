/* 
	Versao 0.2 -- 
		Implementar a comissão variável, da seguinte forma:
			Vendas até 10k - 6%;
			Vendas 10k a 20k - 7%;
			Vendas 20k a 30k - 8%;
			Vendas acima 30k - 9%;
			Vendas acima 50k - 10%;
*/

#include <stdio.h>

int main() {
	float comissao, totalVendas;
	
	printf("Informe o total de vendas: ");
	scanf("%f", &totalVendas);
	
	if (totalVendas < 0) {
		printf("[ERROR] Numero invalido");
		return 0;
	} else {
		if (totalVendas < 10000) {
		comissao = i;
	} else if (totalVendas > 10000 && totalVendas < 20000) {
		comissao = i;
	} else if (totalVendas > 20000 && totalVendas < 30000) {
		comissao = i;
	} else if (totalVendas > 30000 && totalVendas < 50000) {
		comissao = i;
	} else {
		comissao = i;
	}
	
	totalVendas = (comissao / 100) * totalVendas;
	
	printf("Informe o salario fixo: ");
	scanf("%f", &comissao);
	
	comissao = comissao + totalVendas;
	
	printf("\n Salario bruto é: %0.2f", comissao);
	}	
}	
