#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getChar(char *mensaje,char *mensajeError,int reintentos,char *caracter);
int validChar(char caracter);

int main()
{
    char caracterIngresado;
    int caracterError=getChar("Ingrese su caracter \n","Error \n",2,&caracterIngresado);

    if(caracterError != 0)
    {
        printf("Caracter ingresado no valido");
    }
    else
    {
        printf("Su caracter ingresado es %c",caracterIngresado);
    }

    return 0;
}


int validChar(char caracter)
{
    if (isalpha(caracter) != 0)
     {
        return  1;
     }
    else
    {
        return  0;
    }
}

int getChar(char *mensaje,char *mensajeError,int reintentos,char *caracter)
{
    char buffer;
    int retorno = -1;

    if(*mensaje != NULL && *mensajeError != NULL && reintentos >= 0 && caracter != NULL)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);
            fflush(stdin);
            scanf("%c",&buffer);


            if(validChar(buffer)!=0)
            {
                *caracter = buffer;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s",mensajeError);

            }


        }
    }
    return retorno;
}
