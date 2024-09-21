#include <stdio.h>
#include <stdlib.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si este es inferior a $1,500.
PRE Y NPR: variable de tipo real. */

void main(void)
{
float PRE,NPR;
printf("Ingrese el precio del producto: ");
scanf("%f", &PRE);

if (PRE > 1500)
{
    NPR = PRE * 1.11;
    printf("\n Nuevo Precio: %7.2f",NPR);
}
}