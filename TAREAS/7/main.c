#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	double x = atof(argv[1]);
	double y = atof(argv[2]);
	double z = x;

	for(int i=1; i<y; i++) {
		x = x*z;
	}

	printf("%.2f\n", x);


	return 0;
}
