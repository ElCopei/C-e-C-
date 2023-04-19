#include <stdio.h>
int main () {
	int opcao;
	double parcela;
	double preco;
	double valorf;
	printf ("Insira o preco da mercadoria:\n");
	scanf("%lf", &preco);
	printf ("Insira forma de pagamento \nPara pagamento a vista digite (1)\nPara pagamento a vista no cartao digite (2)\nPara pagamento parcelado em 2x sem jutos digite (3)\nPara pagamento em 4x com com juros digite (4)\n");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
		  valorf = preco-(preco*0.08);
		  printf ("Valor a pagar: R$%.2lf", valorf);
		  break;
		case 2:
		  valorf = preco-(preco*0.04);
		  printf ("Valor a pagar: R$%.2lf", valorf);
		  break;
		case 3:
		  valorf=preco;
		  parcela = valorf/2;
		  printf ("Valor a pagar: R$%.2lf em 2x de R$%.2lf", valorf,parcela);
		  break;
		case 4:
		  valorf= preco+(preco*0.08);
		  parcela= valorf/4;
		  printf ("Valor a pagar: R$%.2lf em 4x de %.2lf", valorf,parcela);
		  break;
		default:
			printf("Opcao invalida");
		
	}
}