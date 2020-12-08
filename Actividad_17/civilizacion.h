#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Civilizacion 
{
    string nombre;
    float ubiX;
    float ubiY; 
    int puntuacion;
    
public:
    Civilizacion();
    Civilizacion(const string &nombre,
                float ubiX,
                float ubiY,
                int puntuacion);
    void setNombre(const string &c);
    string getNombre();
    void setUbicacionX(float c);
    float getUbicacionX();
    void setUbicacionY(float c);
    float getUbicacionY();
    void setpuntuacion(int c);
    int getpuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out << left ;
        out << setw(10) << c.nombre;
        out << setw(15) << c.ubiX ;
        out << setw(15) << c.ubiY;
        out << setw(10) << c.puntuacion;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, Civilizacion &c)
    {

        cout << "Nombre: ";
        getline(cin, c.nombre);

        cout << "Ubicacion X: ";
        cin >> c.ubiX;

        cout << "Ubicacion Y: ";
        cin >> c.ubiY;

        cout << "Puntuacion: ";
        cin >> c.puntuacion;

        return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }

    bool operator<(const Civilizacion& c)
    {
        return 2;
    }
    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }
};

#endif