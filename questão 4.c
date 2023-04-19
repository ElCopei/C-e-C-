#include <stdio.h>
int main () {
	double pi= 3.14;
	double area;
	double perim;
	double raio;
	double lado;
	double base;
	double altura;
	int opcao;
	printf ("Para circunferencia, digite(1)\nPara quadrado, digite (2)\nPara retangulo,digite(3)\n");
	scanf("%d", &opcao);
	switch(opcao) {
		case 1:
			printf ("Insira a medida do raio:\n");
			scanf("%lf", &raio);
			area=pi*raio*raio;
			perim= 2 * pi * raio;
			printf ("\nA circunferencia tem %.2lf de area e %.2lf de perimetro", area, perim);
			break;
		case 2:
			printf ("Insira a medida do lado:\n");
			scanf("%lf", &lado);
			area=lado*lado;
			perim= 4 * lado;
			printf ("\nO quadrado tem %.2lf de area e %.2lf de perimetro", area, perim);
			break;
		case 3:
			printf ("Insira a medida da base:\n");
			scanf("%lf", &base);
			printf ("Insira a medida da altura: \n");
			scanf("%lf", &altura);
			area=base * altura;
			perim= 2 * (altura + base);
			printf ("\nA circunferencia tem %.2lf de area e %.2lf de perimetro", area, perim);
			break;
	}
}