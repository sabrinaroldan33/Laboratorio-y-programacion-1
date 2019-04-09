#include <stdio.h>
#include <stdlib.h>
#include "getArrayInt.h"
#define CANTIDAD_ALUMNOS 5

int getArrayInt(char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos, int *arrayResultado, int limite);
int getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *numero);
int validInt (int numero, int minimo, int maximo);
void printArrayInt(int *array,int elementos);

int main()
{
    int edadAlumnos[CANTIDAD_ALUMNOS];
    int errorEdad = getArrayInt("Ingrese las edades de los alumnos: \n","Error de edad \n",6,18,2,&edadAlumnos,CANTIDAD_ALUMNOS);

   if(errorEdad == 0)
   {
    printf(" \n");
    printf("Edades ingresadas: \n");
    printArrayInt(edadAlumnos,CANTIDAD_ALUMNOS);

   }


return 0;




}

