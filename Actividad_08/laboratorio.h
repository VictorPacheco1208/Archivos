#ifndef LABORATIORIO_H
#define LABORATIORIO_H

#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t lab;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregarFinal(c);
        return l;
    }
};

#endif