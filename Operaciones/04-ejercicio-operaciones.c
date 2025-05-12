/******************************************************************************

4.	Pide un número y muestra su valor al cuadrado y al cubo.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{   
    int numero;
    printf("Dame un numero: ");
    scanf("%d",&numero);
    
    printf("Cuadrado = %d  Cubo = %d",numero*numero, numero*numero*numero);
    //Solucion utilizando la libreria Math
    printf("\nCuadrado = %g  Cubo = %g",pow(numero,2), pow(numero, 3));
    return 0;
}
