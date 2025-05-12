/******************************************************************************

1.	Leer un número y mostrar su cuadrado, repetir el proceso hasta que se introduzca
un número negativo.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int numero, elevado, resultado;
    bool bandera = true;
    
    while (bandera){
        printf("Ingresa un numero: ");
        scanf("%d", &numero);
        
        printf("Ingresa a cuanto quieres elevar el numero: ");
        scanf("%d", &elevado);
        
        resultado = numero;
        if(numero>=0){
            for(int i=1;i<elevado;i++){
                resultado *= numero;
            }
            printf("--------------------\n");
            printf("El resultado del numero %d elevado a %d es: %g\n",numero,elevado, pow(numero,elevado));
            printf("El resultado del numero %d elevado a %d es: %d\n",numero,elevado, resultado);
            printf("--------------------\n");
        }else{
            printf("\nAdios!");
            bandera = false;
        }
    }
    
    
    return 0;
}