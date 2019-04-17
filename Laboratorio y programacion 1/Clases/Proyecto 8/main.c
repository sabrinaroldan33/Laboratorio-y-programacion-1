#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscarArray(char array[][50],int max,char comparar)
{   int retorno = -1;
    for(int i=0;i<max;i++)
    {
    if(strcmp(array[i][0],comparar)==0);
    {
    printf("Aca hay una posicion vacia %c",i);
    retorno = i;
    }

    }
    return retorno;
}




int printArray(char array[][50],int max)

{

    for(int i=0;i<max;i++)
    {
    printf("%s \n",array[i]);
    }
    return 0;
}


int inicializarArray(char array[][50],int max)
{
 for(int i=0;i<max;i++)
    {
    array[i][0]='h';
    printf("%s",array[i]);
    }
    return 0;

}

int main()
{
    char arrayNombres[100][50]; //cantidad de empleados y array de la derecha cuantas letras pueden tener los nombres por ej

    strncpy(arrayNombres[0],"JUAN",50); //copio juan en la posicion 0
    strncpy(arrayNombres[1],"LUCAS",50);
    strncpy(arrayNombres[2],"ANA",50);

    //printArray(arrayNombres,3);
    inicializarArray(arrayNombres,3);
    //buscarArray(arrayNombres,5,'\0');
    return 0;
}











/* inicializar(tiene que responder el indice de donde esta vacio)
,encontrar el vacio(pos vacia), funcion que te dice si el nombre esta
o no esta. */


/*usar el \0 para terminar
funcion que recorra el array de nombre
pasar array de nombre
poner en la primer posicion un vacio "" o \0 para saber que esta vacio
*/
