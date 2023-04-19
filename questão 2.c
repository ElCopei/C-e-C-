#include <stdio.h>
int main () {
	char nome;
	int idade;
	printf ("Qual seu nome?\n");
	scanf ("%s", &nome);
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	if (idade <= 13) {
		printf ("Crianca");
	}
	else if (13 < idade < 20)
	  printf ("Adolescente");
	else
	  printf ("Adulto");
}