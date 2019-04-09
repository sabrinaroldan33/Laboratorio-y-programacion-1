#include <stdio.h>
#include <stdlib.h>

int validFloat(float numero, float minimo, float maximo)
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

int getFloat(char *mensaje, char *mensajeError,float minimo, float maximo,int reintentos,float *numero)
{
    float buffer;
    int retorno = -1;

    if(*mensaje!=NULL && *mensajeError!=NULL && numero!=NULL && maximo>=minimo && reintentos>=0)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);
            scanf("%f", &buffer);

            if(validFloat(buffer,minimo,maximo)==1)
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
