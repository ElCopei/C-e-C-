#include <stdio.h>
int main () {
	int t=0;
	printf ("Digite um numero\n");
	scanf ("%d", &t);
	if (t<0) {
	printf ("\nO seu numero e negativo");
}
 else if (t>0) 
 	printf ("\nSeu numero e positivo");
 else 
 	printf ("\nO numero e igual a zero"); 
 getch();
  
}