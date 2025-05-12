/******************************************************************************

1.	Pide dos números al usuario y muestra la suma, resta, multiplicación, división y módulo.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int numero1, numero2;
    
    printf("Ingrese dos numeros: ");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
    
    
    printf("\nSuma = %d\n", numero1 + numero2);
    printf("Resta = %d\n", numero1 - numero2);
    printf("Multipicacion = %d\n", numero1 * numero2);
    printf("Division = %g\n", (float) numero1 / numero2);
    printf("Modulo = %d\n", numero1 % numero2);
    
    // %g: numero flotante sin ceros a la derecha
    // %.2f: numero flotante con 2 cifras a la derecha
    // (float): division se puede convertir en flotante
    return 0;
}
