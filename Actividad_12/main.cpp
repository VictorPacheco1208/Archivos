#include <iostream>
#include "ArregloDinamico.h"

using namespace std;

int main()
{
    Arreglo arreglo;
    arreglo.insertar_final("H");
    arreglo.insertar_final("O");
    arreglo.insertar_final("L");
    arreglo.insertar_final("A");
    arreglo.insertar_final("M");
    arreglo.insertar_final("U");
    arreglo.insertar_final("N");
    arreglo.insertar_final("D");
    arreglo.insertar_inicio("!");
    arreglo.insertar_inicio("O");

    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }

    return 0;
}