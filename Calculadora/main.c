#include <stdio.h>
#include <stdlib.h>

float fexp(float num, int exp);

void main(void)
{
    float numero = 0.0;
    float exponente = 0.0;
    printf("\nPrograma de exponenciacion");

    printf("\nIngresa el numero:");
    scanf("%f", &numero);

    printf("\nIngrese el exponente:");
    scanf("%f", &exponente);

    printf("\nEl resultado es: %f",fexp(numero, exponente));
}


float fexp(float num, int exp)
{
    float result = 0.0;

    if(exp == 0)
{
    return 1;
}

if(exp == 1)
{
    return num;
}
if(exp > 1)
{
    result = num;
    for(int i = 1; i < exp; i++)
    {
        result = result *num;
    }
}
return result;

}
