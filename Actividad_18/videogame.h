#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "civilizacion.h"
#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


class VideoGame{
private:
    string nombreUsuario;
    vector<Civilizacion> civilizaciones;
    vector<VideoGame> usuarios;
    size_t contador;

public:
    VideoGame();
    VideoGame(const string &nombreUsuario);
    void agregarCivilizacion(const Civilizacion &c);
    void mostrar();
    void mostrarUsuario();
    void agregarUser(const string &nombreUsuario);
    
    void setNombreUsuario(const string &v);
    string getNombreUsuario();
    Civilizacion front();
    Civilizacion back();
    Civilizacion& getCivilizacion(int pos);
    bool empty();
    bool emptyU();

    void insertar(const Civilizacion &c, size_t pos);
    size_t size();
    void inicializar(const Civilizacion &c, size_t n);
    void eliminar(const string &v);
    void ordenarNombre();
    void ordenarUbicacionX();
    void ordenarUbicacionY();
    void ordenarPuntuacion();
    //int pos();
    
    Civilizacion* buscar(const Civilizacion &c);
    //Civilizacion* modificar(const Civilizacion &c);
    friend VideoGame& operator<<(VideoGame &v, const Civilizacion &c)
    {
        v.agregarCivilizacion(c);

        return v;
    }
    friend VideoGame& operator<<(VideoGame &v, const string &nombreUsuario)
    {
        v.agregarUser(nombreUsuario);
        return v;
    }

    friend istream& operator>>(istream &in, VideoGame &v)
    {
        cout << "Nombre Usuario: ";
        getline(cin, v.nombreUsuario);

        return in;
    }

    friend ostream& operator<<(ostream &out, const VideoGame &v)
    {
        out << left ;
        out << setw(10) << v.nombreUsuario;
        return out;
    }

    bool operator==(const VideoGame& v)
    {
        return nombreUsuario == v.nombreUsuario;
    }
    bool operator==(const VideoGame& v) const
    {
        return nombreUsuario == v.nombreUsuario;
    }

    bool operator<(const VideoGame& v)
    {
        return 2;
    }
    bool operator<(const VideoGame& v) const
    {
        return nombreUsuario < v.nombreUsuario;
    }

};

#endif
