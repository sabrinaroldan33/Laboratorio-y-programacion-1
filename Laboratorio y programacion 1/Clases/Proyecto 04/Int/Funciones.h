#include <stdio.h>
#include <stdlib.h>

/** \brief recibe un numero entero entre un minimo y un maximo y lo devuelve
*
* \param mensaje char mensaje ingresado por el usuario
* \param mensajeError char mensaje de error ingresado por el usuario
* \param minimo int numero minimo ingresado por el usuario
* \param maximo int numero maximo ingresado por el usuario
* \param reintentos int cantidad de reintentos de la funcion
* \param resultado int devolucion del numero ingresado
* \return int el numero ingresado
*
*/


int getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *numero);

/** \brief valida un numero entero entre un minimo y un maximo
*
* \param numero int numero entero a validar
* \param minimo int numero minimo ingresado por el usuario
* \param maximo int numero maximo ingresado por el usuario
* \return int 0 o 1
*
*/

int validInt (int numero, int minimo, int maximo);
