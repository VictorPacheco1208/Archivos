#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>

using namespace std;

class Computadora
{
    string Marca;
    string Sistema_operativo;
    string Usuario;
    int Memoria_RAM;

public:
    Computadora();
    Computadora(const string &Marca, const string &Sistema_operativo, const string &Usuario, int Memoria_RAM);
    void setMarca(const string &valor);
    string getMarca();
    void setSistema_operativo(const string &valor);
    string getSistema_operativo();
    void setUsuario(const string &valor);
    string getUsuario();
    void setMemoria_RAM(int valor);
    int getMemoria_RAM();
};

#endif
