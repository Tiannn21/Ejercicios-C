/******************************************************************************

8.	Pedir 10 sueldos. Mostrar la suma y cuantos hay mayores de $1000. *

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sueldo, sumatoria=0, contador_mayor_a_1000=0;
    
    for(int i=0;i<10;i++){
        printf("Ingresa el sueldo [%d]: ",i+1);
        scanf("%d",&sueldo);
        
        sumatoria += sueldo;
        if(sueldo>1000){
            contador_mayor_a_1000++;
        }
    }
    
    printf("\nLa suma de sueldos es de: %d.",sumatoria);
    printf("\nLos sueldos mayores a $1000 son: %d.",contador_mayor_a_1000);

    return 0;
}
