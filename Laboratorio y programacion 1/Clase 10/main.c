#include <stdio.h>
#include <stdlib.h>
#include "Pan.h"
#include "utn.h"
#include "utn_isValid.h"
#define CANTIDAD_PANTALLAS 3

int main()
{
    int opcion;
    pantalla led[CANTIDAD_PANTALLAS];
    int id;
    Pan_initArray(led,CANTIDAD_PANTALLAS,1);

    do
    {
    utn_getInt("\nIngrese la opcion: 1-Alta Pantalla 2-Modificar Pantalla 3-Baja Pantalla 4-Contratar 5-Modificar publicacion 6-Cancelar contratacion 7-Consulta facturacion 8-Listar contrataciones 9-Listar pantallas 10- Informar","Opcion no valida",1,10,2,&opcion);

    switch(opcion)
    {
    case 1:




    }

}while();

return 0;

}






/* typedef struct
{
    int idPantalla;
    int idPublicidad;
}ids;
*/

