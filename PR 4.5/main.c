#include <stdio.h>
#include <stdlib.h>

/* Cubo-3.
El programa calcula el cubo de los 10 primeros numeros naturales con la
ayuda de una funcion y utilizando parametros por valor. */

int cubo (int);

void main(void)
{
int I;
for (I = 1; I <= 10; I++)
    printf("\nEl cubo de I es: %d", cubo(I));
}
int cubo(int K)
{
    return (K*K*K);
}
