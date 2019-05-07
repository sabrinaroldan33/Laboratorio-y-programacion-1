#ifndef PUBLICIDAD_H_INCLUDED
#define PUBLICIDAD_H_INCLUDED

typedef struct
{
    int idPublicidad; ///clave unica de identidad univoca
    int isEmpty; ///1=vacio - 0=ocupado
    char cuit[50];
    char archivo[250];
    int dias;

}Publicidad;


// Inicializar Publicidad
int pub_initPublicidad(Publicidad* pPublicidad,int len);
// Dar de alta Publicidad
int pub_addPub(Publicidad* pPublicidad,Pantalla* pPantalla,int len,char* msgE,int tries);
// Borrar Publicidad
int pub_removePublicidad(Publicidad* pPublicidad, int len,char* msgE,int tries);
// Buscar Publicidad por ID
int pub_findPubById(Publicidad* pPublicidad, int len, int idE);
// Buscar espacio libre
int pub_findFree(Publicidad* pPublicidad, int len);
// Buscar por ID
int pub_getID (Publicidad* pPublicidad,int len,char* msgE,int tries);
#endif // PUBLICIDAD_H_INCLUDED
