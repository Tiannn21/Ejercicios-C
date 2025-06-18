/******************************************************************************

12.	Pedir 5 calificaciones de alumnos y decir al final si hay algún suspendido

*******************************************************************************/
#include <stdio.h>

int main()
{
    float calificacion;
    int suspendidos = 0;
    
    for(int i=0;i<5;i++){
        printf("Ingresa nota [%d]: ",i+1);
        scanf("%f", &calificacion);
        
        if(calificacion < 4.0){
            suspendidos+=1;
        }
    }
    
    printf("\nHay %d suspendidos.", suspendidos);

    return 0;
}
