#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
typedef struct
{

    int idEmpleado;
    int isEmpty;
    char nombre[50];
    char apellido[50];
}Empleado;

int emp_initArray(Empleado array[],int limite);
int emp_lugarLibreArray(Empleado array[],int limite,int *indice);
int emp_alta(Empleado array[],int limite,int id);
int emp_baja(Empleado array[],int limite);
int emp_buscarPorNombre(Empleado array[],int limite,char *nombre,int *indice);
int emp_ordenarPorNombre(Empleado array[],int limite);

#endif //EMPLEADO_H_INCLUDED
