#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/** \brief recibe un char letra entre la a y z y lo devuelve, tambien lo hace con chars en mayuscula
*
* \param mensaje char mensaje ingresado por el usuario
* \param mensajeError char mensaje de error ingresado por el usuario
* \param reintentos int cantidad de reintentos de la funcion
* \param char caracter guarda el caracter ingresado
* \return char el caracter ingresado
*
*/
int getChar(char *mensaje,char *mensajeError,int reintentos,char *caracter);

/** \brief recibe un char y valida que este entre la A y la Z
*
* \param caracter char caracter ingresado por el usuario
* \return int 1 si es verdadero, 0 si es falso
*
*/

int validChar(char caracter);



