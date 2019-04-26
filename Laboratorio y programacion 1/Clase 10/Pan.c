#include "Pan.h"
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "utn_isValid.h"

int Pan_initArray(pantalla array[],int size,int valor)
{
    int retorno=-1;
    if(array != NULL && size > 0)
    {
    for(;size>=0;size--)
    {
        array[size].isEmpty=1;

    }
    retorno = 0;
    }

    return retorno;

}


int Pan_buscarVacio(pantalla array[],int size,int *indice)
{   int retorno =-1;


    if(array != NULL && indice != NULL && size >0)
    {
        for(int i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
            {
                *indice=i;
                retorno = 0;
                break;
            }


        }
    }

    return retorno;
}




int Pan_Alta(pantalla array [],int *id,int size)

{
    int posicion;
    if(array != NULL && id != NULL && size >0)
    {
       if(Pan_buscarVacio(array,size,&posicion)==-1)
       {
        printf("No hay lugares libres");
       }
        else
        {
           utn_getName("\nIngrese nombre pantalla","\nError",1,15,2,array[posicion].nombre);
           utn_getTexto("\nIngrese la direccion de la pantalla","\nError",1,30,2,array[posicion].direccion);
           utn_getNumeroConDecimales("\nIngrese precio","\nError",1,9,2,&array[posicion].precio);
        *id++;
        }

    }
return 0;
}

int Pan_buscarId(pantalla array[],int size,int valorBuscado,int *indice)
{   int retorno =-1;
    int i;
    if(array != NULL && size >0 && indice != NULL)
    {
        for(i=0;i<size;i++)
        {
            if(array[i].isEmpty==valorBuscado)
            {
                *indice=i;
                retorno = 0;
                break;
            }

        }

    }
    return retorno;
}


int Pan_Baja(pantalla array [],int size)
{   int posicion;
    int id;
    if(array != NULL && size >0)
    {
        utn_getInt("\nIngrese el ID a dar de baja","\nError",1,3,2,&id);
        Pan_buscarId(array,size,id,&posicion);
        array[posicion].isEmpty=1;
    }
    return 0;
}

int Pan_modificar(pantalla array[],int size)
{   int opcion;
    int posicion;
    int id;
    if(array != NULL)
    {
        utn_getInt("\nIngrese ID","\n Eror",1,3,2,&id);
        Pan_buscarId(array,size,id,&posicion);

        do
        {
        utn_getInt("\n Eliga una opcion a modificar: 1-Nombre 2-Direccion 3-Precio 4-Salir","Error",1,2,2,&opcion);


        switch(opcion)
        {
        case 1:
        utn_getName("\nIngrese nombre pantalla","\nError",1,15,2,array[posicion].nombre);
         break;

        case 2:
        utn_getTexto("\nIngrese la direccion de la pantalla","\nError",1,30,2,array[posicion].direccion);
        break;

        case 3:
        utn_getNumeroConDecimales("\nIngrese precio","\nError",1,9,2,&array[posicion].precio);
        break;

        case 4:
        break;

        }
        }while(opcion != 4);
    }
    return 0;

}


int Pan_printArray(pantalla array[],int size)

{   int retorno =-1;
    if(array != NULL && size >0)
    {
        for(int i=0;i<size;i++)
        {
            if(array[i].isEmpty==1)
            {
            continue;
            }
            printf("\nID: %d,Nombre: %s,Direccion: %s, Precio: %f",array[i].idPantalla,array[i].nombre,array[i].direccion,array[i].precio);
        }
        retorno =0;
    }

return retorno;
}


