/******************************************************************************

5. Crear una matriz “marco” de tamaño 5x5: todos sus elementos deben ser 0 salvo
los de los bordes que deben ser 1. Mostrarla.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int matriz[5][5];

	for(int fila=0; fila<5; fila++) {
		for(int columna=0; columna<5; columna++) {
			if(fila == 0 || columna==0 || fila==4 || columna == 4) {
				matriz[fila][columna] = 1;
			} else {
				matriz[fila][columna] = 0;
			}
		}
	}

	for(int fila=0; fila<5; fila++) {
		for(int columna=0; columna<5; columna++) {
			printf("%d ",matriz[fila][columna]);
		}
		printf("\n");
	}


	return 0;
}