#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn_isValid.h"

int utn_isValidName (char *cadena)
{
    int retorno = 1;
    int i;
    for( i=0 ; cadena[i] != '\0'  ; i++)
    {
        if((cadena[i] > 'Z' || cadena[i] < 'A') && (cadena[i] > 'z' || cadena[i] < 'a')  )
        {
            retorno = 0;
            break;
        }
    }
    return retorno;
}

int utn_isValidAdress(char *array)
{   int retorno =0;
    int i=0;

    for(i=0 ; array[i] != '\0'  ; i++)
    {

        if((array[i] >= 'A' && array[i] <= 'Z') || (array[i] >= 'a' && array[i] <= 'z'))
        {
            retorno = 1;
            break;

        }
    }
    return retorno;
}

int utn_isValidInt (int numero, int minimo, int maximo)
{
    if(numero >= minimo && numero <= maximo)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
