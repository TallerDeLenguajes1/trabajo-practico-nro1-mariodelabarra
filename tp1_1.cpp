#include <stdio.h>
#include <stdlib.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	int varA=32, *puntA, tamaVar;

	puntA = &varA;
	tamaVar = sizeof(varA);

	printf("El contenido que hay en el puntero: %d\n", *puntA);
	printf("La direccion de memoria almacenada por el puntero es: %p\n", puntA);
	printf("La direccion de memoria de la variable varA es: %p\n", &varA);
	printf("La direccion de memoria del puntero es: %p\n", &puntA);
	printf("El tamanio de la variable varA es: %d\n", tamaVar);

	/*Los puntos 2 y 3 tienen el mismo resultado porque el puntero lo que hace es obtener la direccion de memoria
	 de la variable varA, y con ella puede acceder al contenido de la variable. En el punto 4 no es igual la
	 direccion de memoria porque el puntero tambien obtiene una direccion de memoria para almacenar la otra.*/


}
