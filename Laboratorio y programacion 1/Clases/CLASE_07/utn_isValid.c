#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn_isValid.h"

int utn_isValidName (char* cadena)
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
