#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &Marca, const string &Sistema_operativo, const string &Usuario, int Memoria_RAM)
{ 
    this->Marca = Marca;
    this->Sistema_operativo = Sistema_operativo;
    this->Usuario = Usuario;
    this->Memoria_RAM = Memoria_RAM;
}

void Computadora::setMarca(const string &v)
{
    Marca = v;
}
string Computadora::getMarca()
{
    return Marca;
}
void Computadora::setSistema_operativo(const string &v)
{
    Sistema_operativo = v;
}
string Computadora::getSistema_operativo()
{
    return Sistema_operativo;
}
void Computadora::setUsuario(const string &v)
{
    Usuario = v;
}
string Computadora::getUsuario()
{
    return Usuario;
}
void Computadora::setMemoria_RAM(int v)
{
    Memoria_RAM = v;
}
int Computadora::getMemoria_RAM()
{
    return Memoria_RAM;
}
