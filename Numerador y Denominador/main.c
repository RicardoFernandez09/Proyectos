#include <stdio.h>
#include <stdlib.h>
#define SALIR 0
#define EXPONENCIAR 2
#define DIVIDIR 1

float fexp(float num,int exp);
void fexp2(float num,int exp, float *);
int divid(float numerador, float denominador, float *resultado);

int main(void)
{
    float numero = 0.0;
    float exponente = 0.0;
    int menu = 0;
    float result = 0.0;
    do
    {
        printf("\n0-SALIR\n1-DIV\n2-EXP\n");
        scanf("%i",&menu);

        if(menu == DIVIDIR)
        {
            printf("\nPrograma de divicion");

            printf("\nIngresa el numerador: ");
            scanf("%f",&numero);

            printf("\nIngresa el denominador: ");
            scanf("%f",&exponente);

            if(divid(numero,exponente,&result))
            {
                printf("\nEl resultado de la divicion es: %f", result);
            }
            else
            {
                printf("\nDivicion por cero no es valida");
            }


        }
        else if(menu == EXPONENCIAR)
        {
            printf("\nPrograma de exponenciacion");

            printf("\nIngresa el numero: ");
            scanf("%f",&numero);

            printf("\nIngresa el exponente: ");
            scanf("%f",&exponente);
            fexp2(numero,exponente,&result);
            printf("\nEl resultado es: %f", result);
        }

    }
    while(menu);


}

float fexp(float num,int exp)
{
    float result = 0.0;

    if(exp == 0)
    {
        return 1;
    }

    if(exp == 1)
    {
        return  num;
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

void fexp2(float num,int exp, float *r)
{
    //ambito de variable o ciclo de vida de variable
    float result = 0.0;

    if(exp == 0)
    {
        *r = 1;
    }

    if(exp == 1)
    {
        *r = num;
    }

    if(exp > 1)
    {
        result = num;
        for(int i = 1; i < exp; i++)
        {
            result = result *num;
        }
    }

    *r = result;
}

int divid(float numerador, float denominador, float *resultado)
{
    if(denominador == 0.0)
    {
        return 0;
    }
    else
    {

        *resultado = numerador/denominador;
        return 1;
    }
}
