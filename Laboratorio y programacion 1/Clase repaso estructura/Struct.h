#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

 typedef struct
   {
    int isEmpty;
    int id;
    char descripcion[30];


   }localidad;


   typedef struct

   {
   int isEmpty;
   int id;
   char nombre[30];
   char apellido[30];
   int edad;
   int idLocalidad;
   }persona;


localidad construirLocalidad(int id,char descripcion[30]);
// persona construirPersona(int id,int edad,char nombre[30],char apellido[30],int *idLocalidad);
int cargarLocalidades(int tamaño,localidad listado);
void mostrarLocalidad(localidad,int size);
int mostrarListadoLocalidad(localidad[],int size);










#endif // STRUCT_H_INCLUDED
