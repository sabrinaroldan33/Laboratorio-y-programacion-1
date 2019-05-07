#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

//Declaración de estructuras
typedef struct
{   int idPantalla; ///clave unica de identidad univoca
    int isEmpty; ///1=vacio - 0=ocupado
    char nombre[50];
    char direccion[250];
    float precio;
    int tipo;

}Pantalla;


// Declaración de prototipos de las funciones

// Inicialización de array
int pan_initPantalla(Pantalla* pPantalla,int len);
// Dar pantalla de alta
int pan_addPan(Pantalla* pPantalla,int len,int pIndex,char* msgE,int tries);
// Modificar pantalla
int pan_alter(Pantalla* pPantalla, int len,char* msgE,int tries);
// Dar de baja pantalla
int pan_removePantalla(Pantalla* pPantalla, int len,char* msgE,int tries);
// Ordenar pantalla por Precio
int pan_orderByPrice(Pantalla* pPantalla, int len);
// Ordenar pantalla por ID
int pan_orderByID(Pantalla* pPantalla, int len);
// Imprimir la pantalla (mostrar listado)
int pan_printPantalla(Pantalla* pPantalla,int len);
// Buscar pantalla por ID
int pan_findPanById(Pantalla* pPantalla, int len, int idE);
// Buscar espacio libre
int pan_findFree(Pantalla* pPantalla, int len);
// Buscar por ID
int pan_getID (Pantalla* pPantalla,int len,char* msgE,int tries);
#endif // PANTALLA_H_INCLUDED
