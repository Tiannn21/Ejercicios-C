/******************************************************************************

7.	Ingresa un monto en pesos chilenos y determina cuántas monedas de $500, $100, $50, $10, 
necesitas para representarlo.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int monto, monedasDe500, monedasDe100, monedasDe50,monedasDe10,montoFinal;
    printf("Ingresa monto: ");
    scanf("%d",&monto);
    
    montoFinal = monto;
    
    monedasDe500 = montoFinal/500;
    montoFinal = montoFinal - 500*monedasDe500;
    
    monedasDe100 = montoFinal/100;
    montoFinal = montoFinal - 100*monedasDe100;
    
    monedasDe50 = montoFinal/50;
    montoFinal = montoFinal - 50*monedasDe50;
    
    monedasDe10 = montoFinal/10;
    montoFinal = montoFinal - 10*monedasDe10;
    
    printf("\nEl monto %d se representa con: ", monto);
    printf("\n%d Monedas de 500.\n%d Monedas de 100.\n%d Monedas de 50.\n%d Monedas de 10.",monedasDe500,monedasDe100,monedasDe50,monedasDe10);
    return 0;
}
