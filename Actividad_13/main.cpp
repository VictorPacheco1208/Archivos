#include <iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){

    Arreglo<string> arreglo;

    arreglo.insertar_final("Prueba");
    arreglo.insertar_final("de");
    arreglo.insertar_inicio("el");
    arreglo.insertar_inicio("programa");
    arreglo.insertar("ELEMENTO", 2);
    arreglo.eliminar_final();
    arreglo.eliminar_inicio();
    arreglo.eliminar(1); 

    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }

    return 0;
}