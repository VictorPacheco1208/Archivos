#ifndef ALDEANO_H
#define ALDEANO_H

#include <iostream>
#include <iomanip>

#include <vector>
#include <algorithm>
#include <queue>
#include <list>

using namespace std;

class Aldeano
{
private:
    string nombre;
    string genero;
    size_t salud;
    size_t edad;

public:
    Aldeano() {}
    Aldeano(const string &nombre, const string &genero, size_t salud,  size_t edad = 0)
    : nombre(nombre), genero(genero), salud(salud), edad(edad) {}

    void setNombre(const string &nombre);
    string getNombre() const;

    void setGenero(const string &genero);
    string getGenero() const;

    void setSalud(size_t salud);
    size_t getSalud() const;

    void setEdad(size_t edad);
    size_t getEdad() const;


    friend ostream& operator<<(ostream &out, const Aldeano &ald)
    {
        out << left;
        out << setw(10) << ald.nombre;
        out << setw(10) << ald.genero;
        out << setw(8) << ald.salud;
        out << setw(3) << ald.edad;

        return out;
    }
    
    bool operator<(const Aldeano &ald) const
    {
        return nombre < ald.getNombre();
    }

    bool operator==(const Aldeano& ald)
    {
        return nombre == ald.nombre;
    }
    bool operator==(const Aldeano& ald) const
    {
        return nombre == ald.nombre;
    }
/*
    bool operator<(const Aldeano& ald)
    {
        return 2;
    }
    bool operator<(const Aldeano& ald) const
    {
        return nombre < ald.nombre;
    }*/

};

#endif
