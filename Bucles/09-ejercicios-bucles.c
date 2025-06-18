/******************************************************************************

9.	Pide un número (que debe estar entre 0 y 10) y mostrar la tabla de multiplicar de
dicho número. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    do{
        printf("Entregame un numero para devolver su tabla de multiplicar: ");
        scanf("%d", &numero);
    }while(numero<0 && numero>10);
    
    
    for(int i=0; i<11;i++){
        printf("\n%d X %d = %d",numero,i,numero*i);
    }

    return 0;
}

