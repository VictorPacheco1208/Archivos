#ifndef LABORATIORIO_H
#define LABORATIORIO_H

#include "computadora.h"
#include<vector>

class Laboratorio
{
    vector<Computadora> computadoras;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
    void respaldar();
    void recuperar();

    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t num);
    void eliminar(size_t pos);
    void ordenar();
    void eliminar_ultimo();
    Computadora* buscar(const Computadora &c);
    void borrarUltimo();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregarFinal(c);
        return l;
    }
};

#endif