/******************************************************************************

1.	Llenar una matriz con números del 1 al n en orden ascendente y mostrarla.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3], numero=1;
    
    //Llenado de matriz
    for(int fila=0;fila<3;fila++){
        for(int columna=0;columna<3;columna++){
            matriz[fila][columna] = numero;
            numero++;
        }
    }
    
    //Mostrar Matriz
    for(int fila=0;fila<3;fila++){
        for(int columna=0;columna<3;columna++){
            printf("%d ",matriz[fila][columna]);
        }
        printf("\n");
    }
    

    return 0;
}