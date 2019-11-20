#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char *argv[]) {

	double a, b, c;  // Se declaran tres variables double

	a = atof(argv[1]);  // Cada parametro se asigna a una variable
	b = atof(argv[2]);  // Cada variable representa un coeficiente de la ecuacion de segundo grado
	c = atof(argv[3]);

	double determinante = (b*b)-(4*a*c);  // El determinante de la ecuacion es el valor dentro de la raiz
	double parte1 = ((-1)*b)/(2*a);  // La primera parte real de la ecuacion se asigna a una variable para poder utilizarla en un condicional
	double parte2 = sqrt(determinante)/(2*a);  // La segunda parte real de la ecuacion se asigna a otra variable
	double parte2i = sqrt(-determinante)/(2*a);  // Si el determinante es menor a cero, la parte imaginaria se asigna a su variable

	if( determinante > 0 ) {  // Cuando el determinante es mayor a cero, las dos parte de la ecuacion son reales
		printf("%.2f\n", parte1+parte2);  // Se toma la raiz positiva del determinante para calcular la primera solucion a la ecuacion
		printf("%.2f\n", parte1-parte2);  // Se toma la raiz negativa del determinante para calcular la segunda solucion a la ecuacion
	} 
	else if( determinante < 0 ) {  // Si el determinante es menor a cero, las soluciones son complejas
		if( parte1==0 ) {  
			printf("%.2fi\n", parte2i);  // Si la primera parte de las soluciones es igual a cero, solo se imprimen las dos partes imaginarias 
			printf("%.2fi\n", -parte2i);
		}
		else {  
			if( parte2i<0 ) {
				printf("%.2f%.2fi\n", parte1, parte2i);  // Si la parte imaginaria de las soluciones es negativa, el signo '-' se imprime automaticamente
				printf("%.2f+%.2fi\n", parte1, -parte2i);  // Si la parte imaginaria es positiva, se imprime el signo '+' como texto
			} else {
				printf("%.2f+%.2fi\n", parte1, parte2i);  // Si la parte imaginaria es positiva, se imprimen los signos '+' y '-' como texto
				printf("%.2f-%.2fi\n", parte1, parte2i);  
			}
		}
	}
	else {
		printf("%.2f\n", parte1);  // Si el determinante es igual a cero, la ecuacion tiene una sola solucion
	}


	return 0;
}
