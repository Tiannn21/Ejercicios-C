/******************************************************************************

2.	Pedir un número y calcular su factorial.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero,factorial = 1;
    
    printf("Ingresa el numero: ");
    scanf("%d",&numero);
    
    for(int i=2; i <= numero; i++){
        factorial = i*factorial;    
    }
    
    printf("El factorial de %d es: %d",numero,factorial);

    return 0;
}
