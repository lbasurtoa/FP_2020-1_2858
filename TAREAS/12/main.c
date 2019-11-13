#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Saludos( int personas ) {

	if( personas==0 ) {
		return 0;
	}

	return Saludos(personas-1) + (personas-1);
}


int main( int argc, char *argv[]) { 

	int personas = atoi(argv[1]);

	printf("%i\n", Saludos(personas));


	return 0;
}
