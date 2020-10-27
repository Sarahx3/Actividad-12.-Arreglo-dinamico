#include <iostream>
#include "arreglo.h"
using namespace std;

void modificar(int *a){//*puntero
    *a= *a+1;
}

int main()
{
    Arreglo arreglo;
    arreglo.insertar_final(1);
    arreglo.insertar_final(2);
    arreglo.insertar_final(3);
    arreglo.insertar_final(4);
    arreglo.insertar_inicio(-1);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<< arreglo[i] << " ";
    }
    


    // int *b = nullptr;
    // b=new int[100];
    // cout<<b<<" "<< *b <<endl;
    // delete[] b;
    // int a = 12;
    // cout<<a<<endl;
    // cout<<&a<<endl;//direccion de memoria hexadecimal, puntero
    // modificar(&a);
    // cout<<a<<endl;
    return 0;
}
