#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

Civilizacion::Civilizacion(const string &nombre, float ubi_X, float ubiY, int puntuacion)
{
    this->nombre = nombre;
    this->ubiX = ubiX;
    this->ubiY = ubiY;
    this->puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string &v)
{
    nombre = v;
}

string Civilizacion::getNombre()
{
    return nombre;
}

void Civilizacion::setUbicacionX(float v)
{
    ubiX = v;
}

float Civilizacion::getUbicacionX()
{
    return ubiX;
}

void Civilizacion::setUbicacionY(float v)
{
    ubiY = v;
}

float Civilizacion::getUbicacionY()
{
    return ubiY;
}

void Civilizacion::setpuntuacion(int v)
{
    puntuacion = v;
}

int Civilizacion::getpuntuacion()
{
    return puntuacion;
}