#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char *argv[]) {

	double a, b, c;

	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	double determinante = (b*b)-(4*a*c);
	double parte1 = ((-1)*b)/(2*a);
	double parte2 = sqrt(determinante)/(2*a);
	double parte2i = sqrt(-determinante)/(2*a);

	if( determinante > 0 ) {
		printf("%.2f\n", parte1+parte2);
		printf("%.2f\n", parte1-parte2);
	} 
	else if( determinante < 0 ) {
		if( parte1==0 ) {
			printf("%.2fi\n", parte2i);
			printf("%.2fi\n", -parte2i);
		}
		else {
			if( parte2i<0 ) {
				printf("%.2f%.2fi\n", parte1, parte2i);
				printf("%.2f+%.2fi\n", parte1, -parte2i);
			} else {
				printf("%.2f+%.2fi\n", parte1, parte2i);
				printf("%.2f-%.2fi\n", parte1, parte2i);
			}
		}
	}
	else {
		printf("%.2f\n", parte1);
	}


	return 0;
}
