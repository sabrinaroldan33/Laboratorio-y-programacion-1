#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn_isValid.h"
/**
* \brief recibe un string y lo valida
* \param msg char mensaje a mostrar
* \param msgError char mensaje erroneo a mostrar
* \param minimo int numero minimo a ingresar
* \param maximo int numero maximo a ingresar
* \param reintentos int cantidad de reintentos
* \param resultado char se guarda string ingresado validado
* \return int -1 o 0
*/
int utn_getString ( char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado);
//-------------------------------------

/**
* \brief recibe un string y lo valida
* \param msg char mensaje a mostrar
* \param msgError char mensaje erroneo a mostrar
* \param minimo int numero minimo a ingresar
* \param maximo int numero maximo a ingresar
* \param reintentos int cantidad de reintentos
* \param resultado char se guarda el string ingresado validado
* \return int -1 o 0
*/
int utn_getName (   char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado);
int utn_getInt(char *mensaje,char *mensajeError, int minimo, int maximo, int reintentos, int *numero);

int utn_getTexto(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);

int isValidTexto(char* stringRecibido);

int utn_getNumeroConDecimales(char* msg, char* msgError, int minSize, int maxSize, int reintentos, float* input);
int isValidFloatNumber(char* stringRecibido);

