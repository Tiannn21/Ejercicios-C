/******************************************************************************

3.	Hacer un programa que calcule el cuadrado de una suma.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int numero1,numero2,suma;
    printf("Dame dos numeros: ");
    scanf("%d %d", &numero1,&numero2);
    
    suma = numero1+numero2 ;
    
    //Tres formas de representarlo y todas son correctas
    printf("\nEl cuadrado de la suma es: %d", suma*suma);
    printf("\nEl cuadrado de la suma es: %d", (numero1+numero2)*(numero1+numero2));
    printf("\nEl cuadrado de la suma es: %g", pow((numero1+numero2),2));
    return 0;
}
