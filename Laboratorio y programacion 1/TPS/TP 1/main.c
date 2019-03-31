#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

float sumar(float A, float B);
float restar(float A, float B);
float dividir(float A, float B);
float multiplicar(float A, float B);
int factorialA(float A);
int validarInt(int opcion,int min, int max);

int main()
{
    char seguir = 's';
    int opcion = 0;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial = 1;
    float A;
    float B;
    int i = 1;




     do
    {   system("cls");
        fflush(stdin);
        printf("1- Ingresar 1er operando (A=%.2f)\n",A);
        printf("2- Ingresar 2do operando (B=%.2f)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        opcion = validarInt(opcion,1,9);


        switch(opcion)
        {
            case 1:
                    printf("Ingrese A: ");
                    scanf("%f",&A);

                break;
            case 2: printf("Ingrese B: ");
                    scanf("%f",&B);
                    seguir = 's';

                break;
            case 3:
                    printf("Su suma es: %.2f\n ",sumar(A,B));
                    system("pause");

                break;
            case 4:
                    printf("Su resta es: %.2f\n ",restar(A,B));
                    system("pause");

                break;
            case 5:
                    printf("Su division es: %.2f\n ", dividir(A,B));
                    system("pause");

                break;
            case 6:
                    printf("Su multiplicacion es: %.2f\n ", multiplicar(A,B));
                    system("pause");

                break;
            case 7:

                printf("Su factorial es: %d\n", factorialA(A));
                system("pause");

                break;
            case 8: printf("Su suma es: %.2f\n ",sumar(A,B));
                    printf("Su resta es: %.2f\n ",restar(A,B));
                    printf("Su division es: %.2f\n ", dividir(A,B));
                    printf("Su multiplicacion es: %.2f\n ", multiplicar(A,B));
                    printf("Su factorial es: %d\n", factorialA(A));
                    system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }



}
while(seguir!='n');

return 0;
}



