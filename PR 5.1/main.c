#include <stdio.h>
#define CANT 5

 /* Cuenta-números.
 El programa, al recibir como datos un arreglo unidimensional de tipo
 ➥entero y un número entero, determina cuántas veces se encuentra el
 ➥número en el arreglo. */

 void main(void)
 {
    int I = 0, NUM = 0, CUE = 0;
    int ARRE[CANT];
    int a =0;

    for (I=0; I < CANT; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%i", &ARRE[I]);
    }
    printf("\n\nIngrese el numero que se va a buscar en el arreglo: ");
    scanf("%i", &NUM);
    for (I=0; I < CANT; I++)
        if (ARRE[I] == NUM)

            CUE++;
    printf("\n\nEl %d se encuentra %d veces en el arreglo ", NUM, CUE);
 }
