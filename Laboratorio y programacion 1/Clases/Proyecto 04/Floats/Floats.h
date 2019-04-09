


/** \brief recibe un numero float entre un minimo y un maximo y lo devuelve
*
* \param mensaje char mensaje ingresado por el usuario
* \param mensajeError char mensaje de error ingresado por el usuario
* \param minimo int numero minimo ingresado por el usuario
* \param maximo int numero maximo ingresado por el usuario
* \param reintentos int cantidad de reintentos de la funcion
* \param resultado int devolucion del numero ingresado
* \return float el numero ingresado
*
*/

int getFloat(char *mensaje, char *mensajeError,float minimo, float maximo,int reintentos,float *numero);

/** \brief valida un numero float entre un minimo y un maximo
*
* \param numero float numero entero a validar
* \param minimo float numero minimo ingresado por el usuario
* \param maximo float numero maximo ingresado por el usuario
* \return int 0 o 1
*
*/

int validFloat(float numero, float minimo, float maximo);
