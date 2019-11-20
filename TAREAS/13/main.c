#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int listaNumeros[argc-1];  // Se declara una lista que guardara los numeros ingresados como argumentos

	int numero;  // Se declara una variable que guardara temporalmente cada numero para copiarlo en la lista
	int i=0;  // Se declaran una variable que servira de contador 

	for(int i=0; i<argc-1; i++) {  // Este 'for' sirve para convertir los argumentos a tipo entero y copiarlos uno a uno en una lista
		numero = atoi(argv[i+1]);  
		listaNumeros[i] = numero;
	}

	int temporal;  // Esta variable sera muy util pues va a guardar numeros de la lista que van a ser sustituidos por otros

	for(int i=1; i<argc-1; i++) {  
                                     // Este 'for' sirve para comparar dos numeros consecutivos en la lista y colocar el menor de ellos primero
		for(int j=0; j<argc-1-i; j++) {  // A argc-1 se le resta 'i' para no tener que recorrer la lista hasta el final mas de las veces necesarias

			if( listaNumeros[j] > listaNumeros[j+1] ) {  
				temporal = listaNumeros[j];              
				listaNumeros[j] = listaNumeros[j+1];
				listaNumeros[j+1] = temporal;  // La variable 'temporal' guarda temporalmente el numero que se va a mover un lugar adelante
			}

		}  // En este 'for', 'j' nos va a permitir llegar hasta el penultimo numero de la lista y comparalo con su sucesor

	}  // Este 'for' sirve para repetir el proceso argc-1 veces

	for(int i=0; i<argc-1; i++) {
		printf("%i\n", listaNumeros[i]);
	}


	return 0;
}
