#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"



int isValidInt (int numero, int minimo, int maximo)
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

int getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *resultado)
{

    int buffer;
    int retorno =-1;

    if(mensaje!=NULL && mensajeError!=NULL && *resultado!=NULL && maximo>=minimo && reintentos>=0)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);
            scanf("%d",&buffer);

            if(isValidInt(buffer, minimo, maximo)==1)
            {
                *resultado=buffer;
                retorno=0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
            }

        }
    }

    return retorno;
}

