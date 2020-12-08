#include "videoGame.h"
#include <fstream>
#include <algorithm>

VideoGame::VideoGame()
{
    size_t contador = 0;

}
VideoGame::VideoGame(const string &nombreUsuario)
{
    this->nombreUsuario = nombreUsuario;
}

void VideoGame::respaldar()
{
    ofstream archivo("civilizaciones1.txt", ios::out);
    if(archivo.is_open()){
        for (int i = 0; i < civilizaciones.size(); ++i) {
            Civilizacion &c = civilizaciones[i];
            archivo << c.getNombre() << endl;
             archivo << c.getUbicacionX() << endl;
            archivo << c.getUbicacionY() << endl;
            archivo << c.getpuntuacion() << endl;
            c.respaldar_aldeanos();
        }
    }
    archivo.close();
}
void VideoGame::respaldar1()
{
    ofstream archivo("civilizaciones.txt", ios::out);
    if(archivo.is_open()){
        for (int i = 0; i < civilizaciones.size(); ++i) {
            Civilizacion &c = civilizaciones[i];
            archivo << c.getNombre() << endl;
            c.respaldar_aldeanos();
        }
    }
    archivo.close();
}

void VideoGame::recuperar()
{
    ifstream archivo("civilizaciones1.txt");
    if(archivo.is_open()){

        string tempo;
        float ubiX;
        float ubiY; 
        int puntuacion;
       
        Civilizacion ci;
      

        while(true){
            getline(archivo,tempo);
            if(archivo.eof()){
                break;
            }
            ci.setNombre(tempo);
            
            getline(archivo,tempo);
            ubiX = std::stof(tempo);
            ci.setUbicacionX(ubiX);

            getline(archivo,tempo);
            ubiY = std::stof(tempo);
            ci.setUbicacionY(ubiY);

            getline(archivo,tempo);
            puntuacion = std::stoi(tempo);
            ci.setpuntuacion(puntuacion);
            agregarCivilizacion(ci);
            //ci.recuperar_aldeanos();
        }
    }
    archivo.close();
}



void VideoGame::setNombreUsuario(const string &v)
{
    nombreUsuario = v;
}

string VideoGame::getNombreUsuario()
{
    return nombreUsuario;
}

void VideoGame::agregarCivilizacion(const Civilizacion &c)
{
    civilizaciones.push_back(c);
}
void VideoGame::agregarUser(const string &nombreUsuario)
{
    usuarios.push_back(nombreUsuario);
}


void VideoGame::mostrar()
{
    
    cout << left;
    cout << setw(10) << "Nombre";
    cout << setw(15) << "Ubicacion X";
    cout << setw(15) << "Ubicacion Y";
    cout << setw(10) << "Puntuacion";
    cout << endl;
    cout << "---------------------------------------------------" << endl;
    for (size_t i = 0; i < civilizaciones.size(); i++) {
        Civilizacion &c = civilizaciones[i];
        cout << c;
      
    }
}
void VideoGame::mostrarUsuario(){
    //VideoGame v;
    ///cout << "Hola " << v.getNombreUsuario() << endl;
    cout << endl;
    for(size_t i = 0; i < 1; i++){
        VideoGame &v = usuarios[i];
        cout << "Usuario: " << v;
    }
    cout << endl;
}


void VideoGame::insertar(const Civilizacion &c, size_t pos)
{
    civilizaciones.insert(civilizaciones.begin()+pos, c);
}

size_t VideoGame::size()
{
    return civilizaciones.size();
}

void VideoGame::inicializar(const Civilizacion &c, size_t n)
{
    civilizaciones = vector<Civilizacion>(n, c);
}

void VideoGame::eliminar(const string &v)
{
    civilizaciones.erase(civilizaciones.begin());
}

void VideoGame::ordenarNombre()
{
    sort(civilizaciones.begin(), civilizaciones.end(), 
    [](Civilizacion p1, Civilizacion p2){return p1.getNombre() < p2.getNombre();});
}
void VideoGame::ordenarUbicacionX()
{
    sort(civilizaciones.begin(), civilizaciones.end(), 
    [](Civilizacion p1, Civilizacion p2){return p1.getUbicacionX() < p2.getUbicacionX();});
}
void VideoGame::ordenarUbicacionY()
{
    sort(civilizaciones.begin(), civilizaciones.end(), 
    [](Civilizacion p1, Civilizacion p2){return p1.getUbicacionY() < p2.getUbicacionY();});
}
void VideoGame::ordenarPuntuacion()
{
    sort(civilizaciones.begin(), civilizaciones.end(), 
    [](Civilizacion p1, Civilizacion p2){return p1.getpuntuacion() < p2.getpuntuacion();});
}

Civilizacion VideoGame::front()
{
    return civilizaciones.front();
}

Civilizacion VideoGame::back()
{
    return civilizaciones.back();
}

bool VideoGame::empty()
{
    return civilizaciones.empty();
}

bool VideoGame::emptyU()
{
    return usuarios.empty();
}

Civilizacion& VideoGame::getCivilizacion(int pos)
{
    return civilizaciones[pos];
}


Civilizacion* VideoGame::buscar(const Civilizacion &c)
{
    // vector<Civilizacion>::iterator
    auto it = find(civilizaciones.begin(), civilizaciones.end(), c);

    if (it == civilizaciones.end()) {
        return nullptr;
    }
    else {
        return &(*it);
    }
}