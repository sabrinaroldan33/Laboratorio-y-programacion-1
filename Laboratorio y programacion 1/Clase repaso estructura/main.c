#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"


int main()
{
   localidad localidades(3);
   cargarLocalidades(localidades,3);
   mostrarListadoLocalidad(localidades,3);


    return 0;
}

