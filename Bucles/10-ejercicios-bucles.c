/******************************************************************************

10.	Pedir N números y mostrar al final si se ha introducido alguno negativo. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cantidad_numeros, numero, numero_negativo=0;
    
    printf("Cuantos numero quieres ingresar: ");
    scanf("%d", &cantidad_numeros);
    
    for(int i = 0; i<cantidad_numeros;i++){
        printf("Ingresa numero [%d]: ",i+1);
        scanf("%d", &numero);
        
        if(numero < 0){
            numero_negativo = 1;
        }
    }
    
    if(numero_negativo==1){
        printf("\nSI, ha introducido numeros negativos.");
    }else{
        printf("\nNO, ha introducido numeros negativos.");
    }

    return 0;
}
