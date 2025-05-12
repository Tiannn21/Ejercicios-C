/******************************************************************************

4.	Realizar un juego para adivinar un número. Para ello generar un número aleatorio entre 0-100, 
y luego ir pidiendo números indicando “es mayor” o “es menor” según sea mayor o menor con respecto a N. 
El proceso termina cuando el usuario acierta y mostrar el número de intentos.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int numero_aleatorio, numero_ingresado, numero_intentos=0;
    bool bandera = true;
    
    srand (time(NULL));
    numero_aleatorio = rand() % 101;
    
    while(bandera){
        printf("\nIngresa un numero entre 1-100: ");
        scanf("%d",&numero_ingresado);
        numero_intentos++;
        
        if(numero_ingresado < numero_aleatorio){
            printf("\nEl numero aleatorio es mayor.");
        }
        if(numero_ingresado > numero_aleatorio){
            printf("\nEl numero aleatorio es menor.");
        }
        if(numero_ingresado == numero_aleatorio){
            printf("\nFELICIDADES!! ACERTASTE EL NUMERO!");
            bandera=false;
        }
    }
    
    printf("\nTe demoraste [%d] en encontrarlo.", numero_intentos);

    return 0;
}
