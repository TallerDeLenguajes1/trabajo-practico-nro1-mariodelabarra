#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int numCuadrado(int num);
void numCuadrado2(int num);
void mostrarPant(int *var);
void Invertir(int a, int b);
void mayorMenor(int a, int b);

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	int num1, numB, resultado, *puntVar;

	printf("Por favor, ingrese cual numero desea elevar al cuadrado.\n");
	scanf("%d", &num1);
	printf("Ingrese un numero mas por favor.\n");
	scanf("%d", &numB);

	resultado = numCuadrado(num1);
	printf("El %d al cuadrado es: %d\n", num1, resultado);
	//Punto ii
	printf("|---   Apartado 2   ---|\n\n");
	numCuadrado2(num1);

	//Punt iii
	puntVar = &num1;
	mostrarPant(puntVar);

	//Punto iv

	Invertir(num1, numB);

	//Punto V y VI
	mayorMenor(num1, numB);
}

int numCuadrado(int num){
	return (num*num);
}

void numCuadrado2(int num){
	printf("El %d al cuadrado es: %d\n", num, (num*num));
}

void mostrarPant(int *var){
	printf("|---   Apartado 3   ---|\n\n");
	printf("La variable contiene: %d\n", *var);
	printf("La direccion de memoria de la variable: %p\n", var);
}

void Invertir(int a, int b){
	int varAux;

	printf("|---   Apartado 4   ---|\n\n");
	printf("El valor inicial de la variable a es: %d\n", a);
	printf("Y el valor inicial de la variable b es: %d\n", b);
	varAux = a;
	a = b;
	b = varAux;

	printf("Ahora la variable a tiene el valor: %d\n", a);
	printf("Y la variable b tiene el valor: %d\n", b);

}

void mayorMenor(int a, int b){

	int numOrdenados[MAX], num, i=0, t=0, varAux;

	printf("|---   Apartado V   ---|\n\n");
	if(a<b){
		printf("Los numeros ingresados son: %d y %d\n", a, b);
	}else{
		printf("Los numeros ingresados son: %d y %d", b, a);
	}

	while(i<10){
		printf("Por favor, ingrese el numero para el lugar %d: ", i+1);
		scanf("%d", &numOrdenados[i]);
		while(t<=i){
			if(numOrdenados[i]<numOrdenados[t]){
				varAux = numOrdenados[t];
				numOrdenados[t]=numOrdenados[i];
				numOrdenados[i]=varAux;
			}
			t++;
		}
		t=0; i++;
	}
	i=0;
	while(i<10){
		printf("numOrdenados[%d] = %d\n", i+1, numOrdenados[i]);
		i++;
	}
}