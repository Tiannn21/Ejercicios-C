/******************************************************************************

11.	Escribir todos los números del 100 al 0 de 7 en 7.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    for(int i = 100; i >= 0; i-=7){
        printf("%d  ",i);
    }
    
    return 0;
}