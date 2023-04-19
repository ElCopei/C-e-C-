#include <stdio.h>
int main () {
	double peso;
	double altura;
	double imc;
	printf ("Insira sua altura\n");
	scanf ("%lf", &altura);
	printf ("Insira seu peso\n");
	scanf ("%lf", &peso);
	imc = peso/(altura*altura);
	printf ("Seu imc e %lf \n", imc);
	if(imc < 18.5 || imc == 15) {
        printf("Voce esta abaixo do peso\n");
    } 
    else if( imc > 18.5 && imc <= 25 ) {
        printf("Seu peso e o ideal!\n");
    } 
    else if ( imc >= 25 && imc <=30) {
        printf("Voce esta acima do peso!\n");
    }
    else {
        printf("Voce esta muito acima do peso\n");
    }
}
    