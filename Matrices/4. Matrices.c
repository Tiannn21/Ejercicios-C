/******************************************************************************

4.	Simula un sistema de reservas de asientos para un teatro utilizando una matriz, 
donde cada celda indica si un asiento está ocupado o libre.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char matriz[5][5];
    int salir=1, asiento_fila, asiento_columna;
    
    for(int fila=0; fila<5;fila++){
        for(int columna=0; columna<5;columna++){
            matriz[fila][columna] = '-';
        }
    }
    
    do{
        printf("\n/ ");
        for(int i = 0; i<5;i++){
            printf("%d ",i+1);
        }
        printf("\n");
        for(int fila=0; fila<5;fila++){
            for(int columna=0; columna<5;columna++){
                if(columna==0){
                    printf("%d ",fila+1);
                }
                printf("%c ",matriz[fila][columna]);
        }
            printf("\n");
        }
        
        printf("Ingresa Fila y Columna de asientos: ");
        scanf("%d %d", &asiento_fila, &asiento_columna);
        
        if(asiento_fila>5 || asiento_fila < 1 || asiento_columna > 5 || asiento_columna < 1){
            printf("Ingresa un asiento valido");
            continue;
        }
        
        if(matriz[asiento_fila-1][asiento_columna-1] == '-'){
            printf("Haz seleccionado la fila %d y la columna %d.",asiento_fila,asiento_columna);
            matriz[asiento_fila-1][asiento_columna-1] = 'X';
        }else{
            printf("**** El asiento seleccionado esta ocupado, selecciona otro. ****");
        }
        
    }while(salir!=0);
    
    return 0;
}
