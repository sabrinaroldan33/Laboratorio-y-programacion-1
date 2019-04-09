#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *numero);

int validInt (int numero, int minimo, int maximo);

int main()
{
    int Edad;
    int errorEdad;

    errorEdad=getInt("Ingrese una edad entre 0 y 50\n","Error\n",0,50,2,&Edad);

    if(errorEdad != 0)

    {
        printf("Edad no valida");
    }
    else
    {
        printf("La edad ingresada es: %d",Edad);
    }
    return 0;
}


