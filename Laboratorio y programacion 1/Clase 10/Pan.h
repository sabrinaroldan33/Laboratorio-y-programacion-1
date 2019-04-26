#ifndef PAN_H_INCLUDED
#define PAN_H_INCLUDED

 typedef struct
{
    int idPantalla;
    int isEmpty;
    char nombre[50];
    char direccion[256];
    float precio;
    char tipo;


}pantalla;


int Pan_initArray(pantalla array[],int size,int valor);
int Pan_Alta(pantalla array [],int *id,int size);
int Pan_Baja(pantalla array [],int size);
int Pan_modificar(pantalla array[],int size);
int Pan_printArray(pantalla array[],int size);
int Pan_buscarId(pantalla array[],int size,int valorBuscado,int *index);
int Pan_buscarVacio(pantalla array[],int size,int *indice);

#endif // PAN_H_INCLUDED
