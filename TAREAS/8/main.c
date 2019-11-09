#include <stdio.h>
#include <stdlib.h>

int main( argc, char *argv[]) {

	int x = atoi(argv[0]);
	double y = atof(argv[1]);
	double z;

	if(x==0) {
		z = 1.8*y + 32;
	}
	if(x==1) {
		z = (5/9)*(y-32);
	}

	printf("%.2f", z);


	return 0;
}