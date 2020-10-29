#include "ArregloDinamico.h"

Arreglo::Arreglo()
{
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}

Arreglo::~Arreglo()
{
    delete[] arreglo;
}

void Arreglo::insertar_final(const string &s)
{
    
    if(cont == tam){
        expandir();
    }
    arreglo[cont] = s;
    cont++;
}

void Arreglo::insertar_inicio(const string &s)
{
    
    if(cont == tam){
        expandir();
    }
    for(size_t i = cont; i > 0; i--){
        arreglo[i] = arreglo[i-1]; 
    }
    arreglo[0] = s;
    cont++;
}

size_t Arreglo::size()
{
    return cont;
}

void Arreglo::expandir()
{
    string *nuevo = new string[tam+MAX];

    for(size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}