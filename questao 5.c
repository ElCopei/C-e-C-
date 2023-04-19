#include <stdio.h>
int main () {
	int codigo;
	printf ("Insira o codigo do produto\n");
	scanf ("%d", &codigo);
	switch(codigo) {
		case 1:
			printf("Alimento nao perecivel");
			break;
		case 2 :
			printf("Alimento perecivel");
			break;
		case 3 :
			printf("Alimento perecivel");
			break;
		case 4:
			printf("Alimento perecivel");
			break;
		case 5 :
			printf("Vestuario");
			break;
		case 6 :
			printf("Vestuario");
			break;
		case 7 :
			printf("Limpeza");
			break;
		case 8 :
			printf("Limpeza");
			break;
		case 9 :
			printf("Limpeza");
			break;
		case 10 :
			printf("Limpeza");
			break;
		case 11 :
			printf("Limpeza");
			break;
		case 12 :
			printf("Limpeza");
			break;
		default :
			printf("Opcao invalida");
	}
}