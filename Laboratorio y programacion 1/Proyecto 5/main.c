#include <stdio.h>
#include <stdlib.h>
#include <getArray.h>

/*
    int* pEdades;
    int bufferEdad;
    int aEdades[5000];

    aEdades[100] = 22;
    bufferEdad = aEdades[100]
    pEdades = &aEdades[0];


    pEdades = aEdades;//se puede llamar a la funcion asi porque es el caso tipico, no hace falta pasar el indice
    pEdades[88] = 11;
    bufferEdad = pEdades[188]; //o *(pEdades+88) = 11;
                               //bufferEdad = *(pEdades+188); es importante-
                               //no olvidarse los parentesis

// pEdades[88] = 11;
// es lo mismo que *(pEdades+88) = 11; (se suele escribir asi)

  */





int getArrayInt(char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos, int *arrayResultado, int limite);

 int main() //limite lo puedo establecer con un define CANTIDAD ALUMNOS
{
    int numeroIngresado;
    int errorNumero = getArrayInt("Ingrese su numero \n","Error \n",0,100,2,&numeroIngresado,10);

    if(errorNumero!=0)
    {
        return -1;
    }
    else
    {
        return 0;
    }


}


int getArrayInt(char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos, int *numero, int limite)
{

    if(*mensaje!=NULL && *mensajeError!=NULL && minimo<maximo && reintentos >= 0
       && arrayResultado!=NULL && limite > 0)
    {

        for(int i=0;i<limite;i++)
        {

         if(getInt(mensaje,mensajeError,minimo,maximo,reintentos,&buffer)==0); //uso los parametros de
                                                                               //la funcion de getArray

          {
            arrayResultado[i]=buffer;

            retorno =0;
          }
          else
          {
            retorno =-1;
            break;
          }


        }



    }

}




