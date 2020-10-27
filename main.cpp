#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo arreglo;
    arreglo.insertar_final("string1");
    arreglo.insertar_final("string2");
    arreglo.insertar_final("string3");
    arreglo.insertar_final("string4");
    arreglo.insertar_final("string5");
    arreglo.insertar_final("string6");
    arreglo.insertar_final("string7");
    arreglo.insertar_final("string8");
    //MOSTRAR
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<< arreglo[i] << " ";
    }
    cout<<endl;
    arreglo.insertar_inicio("Istring1");
    arreglo.insertar_inicio("Istring2");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<< arreglo[i] << " ";
    }
    
    return 0;
}
