#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "utn_isValid.h"


int utn_getString ( char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado)
{
    int retorno = -1;
    char bufferStr[4096];
    if(msg != NULL && msgError != NULL && maximo>=minimo && reintentos>=0 && resultado != NULL)
    {

        do
        {
            printf("%s",msg);
            fgets(bufferStr,sizeof(bufferStr),stdin);
            bufferStr[strlen(bufferStr)-1] = '\0';
            if(strlen(bufferStr)>=minimo && strlen(bufferStr) <=maximo)
            {
                strncpy(resultado,bufferStr,maximo);
                retorno = 0;
                break;
            }
            reintentos--;
            printf("%s",msgError);
        }while(reintentos>=0);
    }
    return retorno;
}




int utn_getName (   char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado)
{
    int retorno = -1;
    char bufferStr[4096];
    if(msg != NULL && msgError != NULL && minimo < maximo && reintentos>=0 && resultado != NULL)
    {
        if(!utn_getString(msg,msgError,minimo,maximo,reintentos,bufferStr))
        {
            if(utn_isValidName(bufferStr))
            {
                strncpy(resultado, bufferStr,maximo);
                retorno = 0;
            }
        }

    }
    return retorno;
}



int utn_getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *numero)
{

    int buffer;
    int retorno =-1;

    if(*mensaje!=NULL && *mensajeError!=NULL && *numero!=NULL && maximo>=minimo && reintentos>=0)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);
            scanf("%d",&buffer);

            if(utn_isValidInt(buffer, minimo, maximo)==1)
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


