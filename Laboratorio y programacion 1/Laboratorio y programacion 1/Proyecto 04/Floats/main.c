#include <stdio.h>
#include <stdlib.h>


int getFloat(char *mensaje, char *mensajeError,float minimo, float maximo,int reintentos,float *numero);

int validFloat(float numero, float minimo, float maximo);

int main()
{
    float numeroIngresado;
    int errorNumero=getFloat("Ingrese su float aqui \n","Error\n",0,25.5,2,&numeroIngresado);

    if(errorNumero != 0)
    {
        printf("Error, ha ingresado un numero no valido");
    }
    else
    {
        printf("Su numero ingresado es: %.2f",numeroIngresado);
    }

    return 0;
}



