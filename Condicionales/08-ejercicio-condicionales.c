/******************************************************************************

8.	Construir un programa que simule el funcionamiento de una calculadora que puede 
realizar las cuatro operaciones aritméticas básicas (suma, resta, multiplicación y división) 
con valores numéricos enteros. El usuario debe especificar la operación con el primer carácter 
del primer parámetro de la línea de comandos: S o s para la suma, R o r para la resta, M o m para la multiplicación 
y D o d para la división.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1, numero2;
    char operacion;
    
    printf("[S] Sumar.\n[R] Restar.\n[M] Multiplicar.\n[D] Dividir");
    printf("\nIngresa el caracter de la operacion que deseas realizar: ");
    scanf("%c", &operacion);
    
    printf("\nDame dos numeros: ");
    scanf("%d %d", &numero1, &numero2);
     
    // || or O 
    
    if(operacion == 'S' || operacion == 's'){
        printf("\nSUMA = %d", numero1+numero2);
    }
    if(operacion == 'R'|| operacion == 'r'){
        printf("RESTA = %d", numero1-numero2);
    }
    if(operacion == 'M'|| operacion == 'm'){
        printf("MULTIPLICACION = %d", numero1*numero2);
    }
    if(operacion == 'D'|| operacion == 'd'){
        printf("DIVISION = %d", numero1/numero2);
    }
    
    
    return 0;
}
