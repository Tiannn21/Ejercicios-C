/******************************************************************************

1.	Pide un número y determina si es positivo, negativo o cero.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("Dame un numero: ");
    scanf("%d", &numero);
    
    if(numero>0){
        printf("Numero es positivo");
    }
    if(numero<0){
        printf("Numero es negativo");
    }
    if(numero==0){
        printf("El numero es cero");
    }
    
    
    /*if(numero>0){
        printf("Numero es positivo");
    }else{
       if(numero<0){
        printf("El numero es negativo");
        } else{
            printf("El numero es cero");
        }
    } */

    return 0;
}