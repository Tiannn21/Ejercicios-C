/******************************************************************************

5.	La calificación final de un estudiante de informática se calcula con base a las
calificaciones de cuatro aspectos de su rendimiento académico: participación,
primer examen parcial, segundo examen parcial y examen final. Sabiendo que las
calificaciones anteriores entran a la calificación final con ponderaciones del 10%,
25%, 25% y 40%. Hacer un programa que calcule e imprima la calificación final
obtenida por un estudiante.

// 1.0 - 7.0

*******************************************************************************/
#include <stdio.h>

int main()
{
    float participacion, primerExamen, segundoExamen, examenFinal,calificacionFinal
;
    printf("Ingresa tu nota de participacion: ");
    scanf("%f",&participacion);
    printf("Ingresa tu nota del primer examen: ");
    scanf("%f",&primerExamen);
    printf("Ingresa tu nota del segundo examen: ");
    scanf("%f",&segundoExamen);
    printf("Ingresa tu nota del examen final: ");
    scanf("%f",&examenFinal);
    
    calificacionFinal = participacion*0.1 + primerExamen*0.25 + segundoExamen*0.25 + examenFinal*0.4;
    
    printf("\nLa calificacion final es: %.1f", calificacionFinal);

    return 0;
}
