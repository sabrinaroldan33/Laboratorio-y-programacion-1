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
   int isEmpty; // o int estado?
   int id;
   char nombre[30];
   char apellido[30];
   int edad;
   int idLocalidad;
   }persona;


localidad construirLocalidad(int id,char descripcion[30]);
int cargarLocalidades(int tamanio,localidad listado);
void mostrarLocalidad(localidad,int size);
int mostrarListadoLocalidad(localidad[],int size);
//------------------------------------------------------------ PERSONAS
//void inicializarListado(int tamanio,persona[])
// persona construirPersona(int id,int edad,char nombre[30],char apellido[30],int *idLocalidad);
//int buscarLugar(int tamanio,localidad listado); //Si retorna -1 no hay lugar, >0hay lugar
cargarPersona(int tamanio,persona[]);









#endif // STRUCT_H_INCLUDED
