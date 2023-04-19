#include <stdio.h>
int main () {
	int escolha;
	double lado;
	double area;
	double base;
	double altura;
	double base_m;
	double base_mn;
	double raio;
	double pi = 3.14;
	printf("Bem vindo(a) a calculadora geometrica! O que deseja calcular?\n");
	printf("Escoha uma opção:\n");
	printf("1-Area do quadrado\n2-Area do retangulo\n3-Area do trapezio\n4-Area do circulo\n5-Circunferencia do circulo");
	scanf ("%d", &escolha);
	switch (escolha) {
		case 1 :
			printf ("Insira a medida dos lados\n");
			scanf("%lf", &lado);
			area= lado*lado;
			printf("O lado do quadrardo é %lf", area);
			break;
		case 2 :
		    printf ("Insira a medida da base \n");
			scanf ("%lf", &base);
			printf ("Insira a medida da altura \n");
			scanf ("%lf", &altura);
			area= altura*base;
			printf ("A area do retangulo e %lf \n",area);
			break;	
		case 3 :
			printf ("Insira a medida da base maior\n");
			scanf ("%lf", &base_m);
			printf ("Insira a medida da base menor\n");
			scanf ("%lf", &base_mn);
			printf ("Insira a medida da altura\n");
			scanf("%lf", &altura);
			area= ((base_mn+base_m)/2)* altura;
			printf ("A area do trapezio e %lf \n",area);
			break;	
		case 4 :
		    printf ("Insira a medida do raio\n");
		    scanf ("%lf", &raio);
		    area = pi*(raio*raio);
		    printf("A area do circulo e %lf", area);
		    break;	
        case 5 :
          printf ("Insira a medida do raio\n");
		  scanf ("%lf", &raio);
		  area = 2*pi*raio;
		  printf("A circunferencia do circulo e %lf", area);
		  break;	    	
	}	
}