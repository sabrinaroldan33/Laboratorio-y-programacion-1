#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define LEN_LISTA    100

typedef struct
{

    int idEmpleado;
    int isEmpty;
    char nombre[50];
    char apellido[50];
    char dni[10];
}Empleado; //se declara asi la estr empleado y se pone Mayus la primer letra para diferenciar
           //es casi lo mismo que struct pero mas facil
/*
struct sEmpleado
{
    int idEmpleado; //SIEMPRE se declara id + nombre de struct
    int isEmpty; //estos dos int son entidades
    char nombre[50];
    char apellido[50];
    char dni[10];
    struct sFEcha nacimiento;
}

struct sEmpleado auxiliarEmpleado;
auxiliarEmpleado.apellido
*/
/* otro ej con puntero:
struct sEmpleado *pEmpleado;
pEmpleado = &auxiliarEmpleado;
pEmpleado->apellido (se declara con flecha los punteros, no con puntos)
*/











int buscarLibre(char lista[][20],
                int len,
                int* pIndex)
{
    int i;
    int ret=-1;
    for(i=0; i<len ; i++)
    {
        if(lista[i][0]=='\0')
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;

}


int buscarNombre(char* pNombre,
                 char lista[][20],
                 int len,
                 int* pIndex
)
{
    int i;
    int ret=-1;
    for(i=0; i<len; i++)
    {
        if(strcmp(pNombre,lista[i])==0)
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;


}


int main()
{

    int opcion;
    char nombres[LEN_LISTA][20];
    int i,posLibre,posAeliminar;
    char buffer[20];

    for(i=0; i<LEN_LISTA;i++)
        nombres[i][0]='\0';



    while(1)
    {

        utn_getNumber(&opcion,
                      "1)ingresar\n2)listar,4)eliminar\n",
                      "NO!",
                      1,10,2);

        printf("elegiste:%d\n",opcion);
        switch(opcion)
        {
            case 1:
            {
                printf("agregar nombre\n");

                if(buscarLibre(nombres,LEN_LISTA,&posLibre)==0)
                {
                    printf("1.se encontro lugar en %d\n",posLibre);

                    //utn_getString(buffer,"Ingrese:","No!",0,20,1);
                    fgets(buffer,20,stdin);

                    printf("se ingreso:%s\n",buffer);

                    printf("2. se encontro lugar en %d\n",posLibre);
                    //nombres[posLibre] = buffer;
                    strncpy(nombres[posLibre],buffer,20);


                    for(i=0;i<10; i++)
                        printf("-%d: %s\n",i,nombres[i]);

                }

                break;
            }
            case 4:
            {
                // PIDO NOMBRE
                //utn_getString(buffer,...)
                fgets(buffer,20,stdin);buffer[strlen(buffer)-1]='\0';

                // en buffer esta el nombre
                buscarNombre(buffer,
                            nombres,
                            LEN_LISTA,
                            &posAeliminar);

                // borro
                nombres[posAeliminar][0]='\0';

                break;
            }
        }

    }


    return 0;
}



