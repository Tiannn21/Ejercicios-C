/******************************************************************************

6.	Ingresa una cantidad de días y convierte a semanas y días.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int dias,diasFinales,semanas;
    printf("Ingresa una cantidad de dias: ");
    scanf("%d",&dias);
    
    semanas = dias/7;
    diasFinales = dias - 7*semanas;
    
    printf("\n%d dias son: %d semanas y %d dias.",dias,semanas,diasFinales);
    return 0;
}
