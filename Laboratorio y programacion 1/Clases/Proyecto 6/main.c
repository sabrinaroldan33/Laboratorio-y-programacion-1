#include <stdio.h>
#include <stdlib.h>       '
#include <string.h>
#define NOMBRE 26
/* CONSIGNA: variable nombre,lo guardo en buffer(para verificar),
 hay que ver cuantos caracteres tiene y poder copiarlo en destino */
int main()
{

    char nombre[NOMBRE];
    char buffer[NOMBRE];
    printf("Ingrese su nombre aqui ");
    fgets(buffer,sizeof(buffer),stdin);

    if(strcmp(buffer,buffer)>0)
    {
    printf("Error, ingrese un nombre mas chico");
    }
    else
    {
    strcpy(nombre,buffer);
    }

    printf("%s",nombre);








    return 0;
}




/*
ejemplo:

char nombre [257] = {'H','O','L','A','\0'} //256 + 1, no se pueden igualar arrays, solo con una funcion, siempre
                                        //tiene que terminar con \0 porqe todas las funciones de string saben que llegan hasta ahi, sino toma infinitos datos etc
char nombre2[257]="HOLA";

    strncpy(nombre,nombre2,257)//Se puede usar stncpy pero esta es mas seguro porque le podes meter hasta la cantidad
                              //se ingresa origen, destino, tamañano
     //se podria escribir como el codigo de arriba pero queda mejor asi:

    strncpy(nombre,nombre2,sizeof(nombre));
    fgets(nombre,sizeof(nombre),stdin) //remplazo al scanf pq podes ingresar ilimitada cantidad de caracteres etc
    // lo podria haber escrito asi a la linea de arriba: scanf("%s",nombre);
    printf("\n%s",nombre);
    strlen() //para saber cuantos caracteres tiene adentro
    strcmp() //me dice cual de los dos arrays es mas grande si izq o der o si son iguales con -1,0 y 1
 */