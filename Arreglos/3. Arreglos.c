/******************************************************************************

3. Leer 10 números enteros, guardarlos en un arreglo. Debemos mostrarlos en el
siguiente orden: el primero, el último, el segundo, el penúltimo, el tercero, etc.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[10];
    
    for(int i=0;i<10;i++){
        numeros[i]=i+1;
    }
    int j=10;
    for(int i=0;i<5;i++){
        j--;
        printf("%d ",numeros[i]);
        printf("%d ",numeros[j]);
    }

    return 0;
}
