#include <stdio.h>
#include <stdlib.h>
#include "getArrayInt.h"

int getArrayInt(char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos, int *arrayResultado, int limite)
{
    int retorno=-1;
    int buffer;


    if(arrayResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && maximo>=minimo && reintentos>=0 && limite>0)
    {
        for(int i=0;i<limite;i++)
        {
            if(getInt(mensaje,mensajeError,minimo,maximo,reintentos,&buffer)==0)
            {
                arrayResultado[i]=buffer;
                retorno = 0;
            }
            else
            {
                printf("%s",mensajeError);
                break;
            }

        }
    }
    return retorno;
}



void printArrayInt(int *array,int elementos)
{
    int i;
    for(i=0;i<elementos;i++)
    {

        printf("%d\n",array[i]);
    }
}


int validInt (int numero, int minimo, int maximo)
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

int getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *numero)
{

    int buffer;
    int retorno =-1;

    if(*mensaje!=NULL && *mensajeError!=NULL && *numero!=NULL && maximo>=minimo && reintentos>=0)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);
            scanf("%d",&buffer);

            if(validInt(buffer, minimo, maximo)==1)
            {
                *numero=buffer;
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


