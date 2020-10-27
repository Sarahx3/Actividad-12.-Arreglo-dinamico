#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

class Arreglo
{
private:
    int *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

    void expandir();

public:
    Arreglo();
    ~Arreglo();

    void insertar_inicio(int v);
    void insertar_final(int v);
    size_t size();

    int operator[](size_t p){
        return arreglo[p];
    }
};



#endif //ARREGLO_H