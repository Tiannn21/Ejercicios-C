/******************************************************************************

2.	Mostrar la diagonal principal y secundaria de una matriz cuadrada.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int max_filas=5,max_columnas=5;
    int matriz[max_filas][max_columnas], numero=1;

    //Llenado de matriz
    for(int fila=0;fila<max_filas;fila++){
        for(int columna=0;columna<max_columnas;columna++){
            matriz[fila][columna] = numero;
            numero++;
        }
    }
    
    //Diagonal Principal
    for(int fila=0;fila<max_filas;fila++){
        for(int columna=0;columna<max_columnas;columna++){
            if(fila==columna){
                printf("%d ",matriz[fila][columna]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    //Diagonal Secundaria
    for(int fila=0;fila<max_filas;fila++){
        for(int columna=0;columna<max_columnas;columna++){
            if(fila+columna==max_filas-1){
                printf("%d ",matriz[fila][columna]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    //Diagonal Principal y Secundaria
    for(int fila=0;fila<max_filas;fila++){
        for(int columna=0;columna<max_columnas;columna++){
            if(fila==columna){
                printf("%d ",matriz[fila][columna]);
                continue;
            }
            if(fila+columna==max_filas-1){
                printf("%d ",matriz[fila][columna]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
