/******************************************************************************

3.	Pedir un número N, introducir N sueldos y mostrar el sueldo mas grande.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero_sueldos, sueldo,sueldo_mayor = 0;
    printf("Cuantos sueldos quieres ingresar?: ");
    scanf("%d", &numero_sueldos);

    for(int i=0; i<numero_sueldos; i++){
        printf("Ingresa el sueldo numero [%d]: ",i+1);
        scanf("%d", &sueldo);
        
        if(sueldo > sueldo_mayor){
            sueldo_mayor = sueldo;
        }
    }
    
    printf("El sueldo mayor es: %d", sueldo_mayor);
    return 0;
}
