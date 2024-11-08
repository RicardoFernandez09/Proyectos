#include <stdio.h>
#include <stdlib.h>

/*  Temperaturas.
 El programa recibe como datos 24 números reales que representan las temperaturas en el exterior en un período de 24 horas. Calcula el promedio del día y las temperaturas máxima y mínima con la hora en la que se registraron.
 */


 void Acutem(float);
 void Maxima(float, int);
 void Minima(float, int);

 float ACT = 0.0;
 float MAX = -50.0;
 float MIN = -60.0;
 int HMAX;
 int HMIN;

/* Variables globales. AACCTT se utiliza para acumular las temperaturas,
 ➥por esa razón se inicializa en cero. M MAAXX se utiliza para calcular la
 ➥máxima; se inicializa en ––5500 para que el primer valor que se ingrese
 ➥modifique su contenido. MMIINN se usa para calcular la mínima; se
 ➥inicializa con un valor muy alto para que el primer valor ingresado
 ➥modifique su contenido. HHMMAAXX y HHMMIINN se utilizan para almacenar el
 ➥horario en que se produjeron las temperaturas máxima y mínima,
 ➥respectivamente. */

void main(void)
{
float TEM;
int I;
for (I = 1; I <= 24; I++)
{
    printf("Ingresa la temperatura de la hora %d: ", I);
    scanf("%f", &TEM);
    Acutem(TEM);
    Maxima(TEM, I);
    Minima(TEM, I);
}
printf("\nPromedio del dia: %5.2f", (ACT / 24));
printf("\nMaxima del dia: %5.2f \tHora: %d", MAX, HMAX);
printf("\nMinima del dia: %5.2f \tHora: %d", MIN, HMIN);
}

void Acutem(float T)
{
ACT += T;
}

void Maxima(float T, int H)
{
if (MAX < T)
{
    MAX = T;
    HMAX = H;
}
}

void Minima(float T, int H)
{
if (MIN > T)
{
    MIN = T;
    HMIN = H;
}
}
