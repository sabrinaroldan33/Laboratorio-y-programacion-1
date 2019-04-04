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


