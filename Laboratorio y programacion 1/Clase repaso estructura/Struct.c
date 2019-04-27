#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"



localidad construirLocalidad(int id,char descripcion[30])
{
    localidad retornarLocalidad;
    printf("Ingrese el id localidad");
    scanf("%d",&retornarLocalidad.id);

    printf("Ingrese la descripcion de su domicilio");
    fflush(stdin);
    gets(retornarLocalidad.descripcion);

    return retornarLocalidad;

}


int cargarLocalidades(int tamanio,localidad listado)
{

for(int i=0;i<tamanio;i++)
{
listado[i]=construirLocalidad();

}

return 1;
}


void mostrarListadoLocalidad(localidad listado,int tamanio) //tengo que listar
{

    int i;
    for(i=0;i<tamanio;i++)
    {
    mostrarListadoLocalidad(listado[i]);
    }

}

void mostrarLocalidad(localidad localidad)
{
    printf("\nCodigo :\t %d",localidad.id);
    printf("\nNombre :\t %s",localidad.descripcion);
    printf("\n---------------------------------");


}


// ------------------------------------------------------------- PERSONAS


/* void inicializarListado(int tamanio,persona[])
{

for(int i=0;int i<size;i++)
{
    char listado[i].estado=0;

}
return 0;
}
*/


/*persona construirPersona(int edad,char nombre[30],char apellido[30])
{
    printf("Ingrese el id localidad");
    scanf("%d",&id);
    printf("Ingrese id");
    scanf()
   printf("Ingrese la edad de la persona");
    scanf("%d",.edad);
    printf("Ingrese el nombre de la persona"):
    fflush(stdin);
    gets(.nombre);
    printf("Ingrese el apellido de la persona");
    fflush(stdin);
    gets(.apellido);



}

*/
int buscarLugar(int tamanio,localidad listadoint,int *indice)
{
    for(int i=0;i<tamanio;i++)
    {
        if(estado==0)
        {
            *indice=i;
            break;
            return 0;
        }

    }

    return 1;
}

cargarPersona(int tamanio,persona[] listado)
{
    int indice = buscarLugar(tamanio,listado);
    if(indice = -1)
    {
        listado[i]=construirPersona(3);

    }

    return indice;


}
