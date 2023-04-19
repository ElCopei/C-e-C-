#include <stdio.h>
int main() {
	int escolha;
	double num1;
	double num2;
	double operador;
	printf ("Insira o primeiro numero: \n");
	scanf ("%lf", &num1);
	printf ("Insira o segundo numero: \n");
	scanf ("%lf", &num2);
	printf ("Digite o numero da operação que deseja excutar: \n1-Soma(+) \n2-Subtracao(-)\n3-Multiplicacao(x)\n4-Divisao(/)\n");
	scanf("%d", &escolha);
	switch (escolha) {
		case 1:
		  operador = (num1 + num2);
		  printf ("Resultado: %.2lf", operador);
		  break;
		case 2:
		  operador = num1 - num2;
		  printf ("Resultado: %.2lf", operador);
		  break;
		case 3:
		  operador = num1 * num2;
		  printf ("Resultado: %.2lf", operador);
		  break;
		case 4:
		  operador = num1/num2;
		  printf ("Resultado: %.2lf", operador);
		  break;
		
			
	}
}