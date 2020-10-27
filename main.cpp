#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo arreglo;
    arreglo.insertar_final("assss");
    arreglo.insertar_inicio("asdas");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<< arreglo[i] << " ";
    }
    
    return 0;
}
