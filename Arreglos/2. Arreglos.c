/******************************************************************************

2.	Leer 5 números, guardarlos en un arreglo y mostrarlo en el orden inverso al
introducido.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[5];
    
    for(int i=0;i<5;i++){
        printf("Ingresa numero [%d]: ",i+1);
        scanf("%d",&numeros[i]);
    }
    
    printf("\n");
    for(int i=4;i>=0;i--){
        printf("[%d] ",numeros[i]);
    }

    return 0;
}
