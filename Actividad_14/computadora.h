#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iomanip>
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
    void setMarca(const string &v);
    string getMarca();
    void setSistema_operativo(const string &v);
    string getSistema_operativo();
    void setUsuario(const string &v);
    string getUsuario();
    void setMemoria_RAM(int v);
    int getMemoria_RAM();

    friend ostream& operator<<(ostream &out, const Computadora &c){
        out<<left;
        out << setw(10) << c.Marca;
        out << setw(20) << c.Sistema_operativo;
        out << setw(10) << c.Usuario;
        out << setw(10) << c.Memoria_RAM;
        out << endl;
        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout<<"Marca: ";
        getline(cin, c.Marca);
        cout<<"Sistema operativo: ";
        getline(cin, c.Sistema_operativo);
        cout<<"Usuario: ";
        cin >> c.Usuario;
        cout<<"Memoria Ram: ";
        cin >> c.Memoria_RAM;
        return in;
    }
    bool operator==(const Computadora& c){
        return Marca == c.Marca;
    }
    bool operator==(const Computadora &c) const
    {
        return Marca == c.Marca;
    }
};

#endif
