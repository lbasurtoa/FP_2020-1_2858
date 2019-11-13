#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	int nDigitos;
	nDigitos = strlen(argv[1]); // Con la funcion 'strlen' podemos conocer el numero de digitos del entero	

	char listaChar[nDigitos];  // Lista de digitos de tipo 'char' 
	int z = 0;                 // 'z' se inicializa en 0 para hacer la suma de digitos
	int listaInt[nDigitos];    // Lista de digitos de tipo 'int'

	for(int i=0; i<nDigitos; i++) {  // Con 'for' iremos sumando cada digito en la variable 'z'
		listaChar[i] = argv[1][i];  // Cada caracter, o digito, del numero entero ingresado se copia como 'char' en una lista 
	        listaInt[i] = atoi(&listaChar[i]);  // Cada caracter se copia en una nueva lista pero ahora en tipo entero
	        z = z + listaInt[i];  
	}

	printf("%i\n", z);  // Se imprime el resultado de la suma


	return 0;
}
