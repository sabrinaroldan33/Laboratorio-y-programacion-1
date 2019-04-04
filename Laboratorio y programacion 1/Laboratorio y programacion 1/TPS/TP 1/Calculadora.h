#include <stdio.h>
#include <stdlib.h>

/** \brief Recibe dos numeros flotantes, los suma y muestra el resultado
 *
 * \param A float primer numero ingresasdo por el usuario
 * \param B float segundo numero ingresado por el usuario
 * \return float la suma de los dos numeros
 *
 */

float sumar(float A, float B);

/** \brief Recibe dos numeros flotantes, los resta y muestra el resultado
 *
 * \param A float primer numero ingresado por el usuario
 * \param B float segundo numero ingresado por el usuario
 * \return float el resto de los dos numeros
 *
 */

float restar(float A, float B);

/** \brief Recibe dos numeros flotantes, los divide y muestra el resultado
 *
 * \param A float primer numero ingresado por el usuario
 * \param B float segundo numero ingresado por el usuario
 * \return float el cociente de la division
 *
 */

float dividir(float A, float B);

/** \brief Recibe dos numeros flotantes, los multiplica y muestra el resultado
 *
 * \param A float primer numero ingresado por el usuario
 * \param B float segundo numero ingresado por el usuario
 * \return float el producto de la multiplicacion
 *
 */

float multiplicar(float A, float B);

/** \brief Recibe un numero entero, calcula su factorial y muestra el resultado
 *
 * \param A int primer numero ingresado por el usuario
 * \return int el factorial del numero
 *
 */
int factorialA(float A);

/** \brief Recibe un numero y lo valida entre entre el minimo y el maximo de las opciones dadas
*
* \param opcion int opcion ingresada por el usuario
* \param min int minimo ingresado por el usuario
* \param max int máximo ingresado por el usuario
* \return int la opcion ingresada
*
*/

int validarInt(int opcion,int min, int max);
