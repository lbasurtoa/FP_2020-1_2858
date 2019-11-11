#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	int x = atoi(argv[1]);
	double y = atof(argv[2]);
	double z;

	if(x==0) {
		z = 1.8*y + 32;
	} 
	else {
		if (x==1) {
			z = (y-32) / 1.8;
		}
	}

	printf("%.2f\n", z);


	return 0;
}
