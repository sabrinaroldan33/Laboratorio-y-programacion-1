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

/*persona construirPersona(int edad,char nombre[30],char apellido[30])
{
      printf("Ingrese el id localidad");
    scanf("%d",&id);
   printf("Ingrese la edad de la persona");
    scanf("%d",&edad);
    printf("Ingrese el nombre de la persona"):
    fgets(nombre,sizeof(nombre),stdin);
    printf("Ingrese el apellido de la persona");
    fgets(apellido,sizeof(apellido),stidin);
    printf("Ingrese id localidad");
    scanf()


}

*/
int cargarLocalidades(int tamaño,localidad listado)
{

for(int i=0,i<tamaño,i++)
{
listado[i]=construirLocalidad();

}

return 1;
}


void mostrarListadoLocalidad(localidad listado,int size) //tengo que listar
{

    int i;
    for(i=0;i<size;i++)
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

