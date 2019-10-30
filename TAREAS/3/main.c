#include <stdio.h>


int main ( int argc, char *argv[] ) {

	double n1, n2;

	n1 = atof(argv[1]); // Se convierten el primer y segundo numeros de entrada a tipo double
	n2 = atof(argv[2]); 

	printf("%.2f\n", n1 + n2); // Se imprime la suma de ambos numeros
	printf("%.2f\n", n1 - n2); // Se imprime la diferencia de ambos numeros
	printf("%.2f\n", n1 * n2); // Se imprime el producto de ambos numeros
	printf("%.2f\n", n1 / n2); // Se imprime la division de ambos numeros


	return 0;
}