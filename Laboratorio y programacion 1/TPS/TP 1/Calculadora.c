#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

float sumar(float A, float B)
{
    float suma;
    suma= A+B;
    return suma;
}

float restar(float A, float B)
{
    float resta;
    resta= A-B;
    return resta;
}

float dividir(float A, float B)
{
   float division;

    if(B != 0)
    {
    division= A/B;
    }
    else
    {
        printf("No se puede dividir por 0 \n");
        division = -1;
    }
    return division;


}

float multiplicar(float A, float B)
{
    float multiplicacion;
    multiplicacion= A*B;
    return multiplicacion;
}

int factorialA(float A)
{
    int factorial = 1;
    int i = 1;

        for(i = 1;i <= A;i++)
        {
        factorial = factorial * i;

        }
        return factorial;
}

int validarInt(int opcion,int min, int max)
{
    while(opcion < min || opcion > max)
    {

        printf("\nError ingreso una opcion incorrecta, reingrese una opcion: ");
        scanf("%d",&opcion);



    }
   return opcion;
}
