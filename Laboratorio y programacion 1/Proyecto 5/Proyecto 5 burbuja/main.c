#include <stdio.h>
#include <stdlib.h>
//forma menos ineficiente sin usar los 2 for
// quicksort para ordenar kilombo, inserction para insertar algo perdido
int swap(int A[i],A[i+1]);

int main()
{

int limite = 4;
int A[i]={8,1,0,4};

do
{

for(i=0;i<limite-i;i++)
{
    int flagswap=0;
    if(A[i]>A[i+1])
    {
        swap(A[i],A[i+1]);
        flagswap=1;
    }
}


}
while(flagswap) //se termina si queda en 0 porque es falso
//swap no existe, hay que hacerla en funcion


int swap(int A[i],A[i+1])
{
  int buffer =0;

  buffer = A[i];
  A[i] = A[i+1];
  A[i+1] = buffer;


}

}
