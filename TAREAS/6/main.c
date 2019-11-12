#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	int resultado;  // Resultado de la multiplicacion que se va a mostrar

	for( int i=1, i<argc, i++) {  // Este 'for' recorrera la lista elemento por elemento
		resultado=1;
                                      // Este 'for' multiplicara a todos los elementos de la lista,
		for( int j=1, j<argc, j++) {  // excepto excepto al de la posicion donde se encuentra
			if(j!=i) {                          
				resultado = resultado*atoi(argv[j]);  
			} 
		}

		printf("%d\n", resultado);  // Imprime el resultado y cada valor se imprimira comforme se recorra la lista
	}                               // Al final del for se habran impreso un total de 'argc' numeros


	return 0;
}