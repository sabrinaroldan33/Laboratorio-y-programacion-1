#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CANTIDAD_NUMEROS 3
int obtencionDeNumeros (void);
int obtencionDeMaximoYMinimo (void);

int main(){
    //obtencionDeNumeros();


    obtencionDeMaximoYMinimo();
    return 0;
}

int obtencionDeNumeros (void)
  {
  int i;
  int aux;
  int acumulador = 0;
  float promedio;

  for(i = 0; i < CANTIDAD_NUMEROS; i++)
  {
  printf("Ingrese su numero aqui ");
  scanf("%d", &aux);
  acumulador = acumulador + aux;
  }

  promedio = (float)acumulador / CANTIDAD_NUMEROS;

  printf("Su promedio es %.2f",promedio);
  /* if(calcularPromedio(acumulador,CANTIDAD_NUMEROS,&promedio) == 0)
  {
    printf("el promedio es: %.2f",promedio);
  }

  else
  {
    printf("ERROR");
  }
  */
return 0;
}


int calcularPromedio(int valorAcumulado, int cantidad, float* promedio ) /* uso el asterisco para cambiar de scope */
{
    int retorno = -1;
    if(cantidad > 0 && promedio != NULL)  /* para que corroborar que no haya cambiado el valor de memoria de float*/
    {
    /* pongo asterisco de nuevo para aclarar que no me refiero al promedio del scope previo */
    *promedio=(float)valorAcumulado/cantidad;
    retorno = 0;
    }
    return retorno;
}


int obtencionDeMaximoYMinimo (void)
{
    int i;
    int max = INT_MIN;
    int min = INT_MAX;
    int aux;


    for(i = 0;i < CANTIDAD_NUMEROS;i++)
    {
        printf("Ingrese su numero aqui ");
        scanf("%d", &aux);
        if(aux > max)
        {
            max = aux;
        }
        if(aux < min)
        {
            min = aux;
        }
    }

    printf("Su maximo es:  %d\n", max);
    printf("Su minimo es: %d\n", min);








    return 0;
}
