#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double raiz(double x, double tolerancia, double candidato) {

	double promedio;
	double division;

	while( fabs(division-candidato) > tolerancia ) {
		division = x / candidato;
		promedio = (division + candidato) / 2;
		candidato = promedio;
	}

	long double resultado = candidato;

	return resultado;
}

int main(int argc, char *argv[]) {

	double x = atof(argv[1]);
	double t = atof(argv[2]);
	double c = atof(argv[3]);

	printf("%lf\n", raiz(x, t, c));


	return 0;
}
