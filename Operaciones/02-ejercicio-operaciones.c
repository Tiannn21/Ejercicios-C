/******************************************************************************

2.	Pide al usuario tres notas, luego calcula el promedio.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    
    printf("Ingresa 3 notas: ");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    
    
    printf("\nEl promedio es: %.1f", (nota1 + nota2 + nota3)/3);
    
    // %g
    // %.2f
    return 0;
}
