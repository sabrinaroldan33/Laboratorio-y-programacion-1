#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    char auxName[500] = "test";
    if(utn_getName( "Ingrese su nombre: ",
                    "Nombre no valido,",
                    2,
                    6,
                    2,
                    auxName) == 0)
    {
        printf("Su nombre es %s",auxName);
    }
    else
    {
        printf("Nombre incorrecto: %s",auxName);
    }
    return 0;
}
