#include <stdio.h>
#include <stdlib.h>

int main( argc, char *argv[]) {

	double x = atof(argv[0]);
	double y = atof(argv[1]);
	double z = x;

	for(int i=1, i<y, i++) {
		x = x*z;
	}

	printf("%.2f", x);


	return 0;
}
