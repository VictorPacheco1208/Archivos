#include "laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{
    
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    computadoras.push_back(c);
}

void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(10)<<"Marca";
    cout<<setw(20)<<"Sistema operativo";
    cout<<setw(10)<<"Usuario";
    cout<<setw(10)<<"Memoria RAM";
    cout<<endl;
    for(size_t i=0;i<computadoras.size();i++){
        Computadora &c = computadoras[i];
        cout << c;
        //cout<<"Marca: "<<c.getMarca()<<endl;
        //cout<<"Sistema operativo: "<<c.getSistema_operativo()<<endl;
        //cout<<"Usuario: "<<c.getUsuario()<<endl;
        //cout<<"Memoria RAM: "<<c.getMemoria_RAM()<<endl;
        //cout<<endl;
    }
}

void Laboratorio::respaldar()
{
    ofstream archivo ("computadora.txt");
    if (archivo.is_open()){
        for(size_t i=0;i<computadoras.size();i++){
            Computadora &c = computadoras[i];
            archivo << c.getMarca()<<endl;
            archivo << c.getSistema_operativo()<<endl;
            archivo << c.getUsuario()<<endl;
            archivo << c.getMemoria_RAM()<<endl;
    }
}
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadora.txt");
    if(archivo.is_open()){
        string t;
        int memoria;
        Computadora c;

        while(true){
            getline(archivo, t);
            if (archivo.eof()){
                break;
            }
            c.setMarca(t);
            getline(archivo, t);

            c.setSistema_operativo(t);
            getline(archivo, t);

            c.setUsuario(t);
            getline(archivo, t);
            
            memoria = stoi(t);
            c.setMemoria_RAM(memoria);
            agregarFinal(c);
        }
    }
    archivo.close();
} 

void Laboratorio::insertar(const Computadora &c, size_t pos)
{
    computadoras.insert(computadoras.begin()+pos, c);
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &c, size_t num)
{
    computadoras = vector<Computadora>(num, c);
}

void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
    sort(computadoras.begin(), computadoras.end());
}

void Laboratorio::eliminar_ultimo()
{
    computadoras.pop_back();
}

Computadora* Laboratorio::buscar(const Computadora &c)
{
    auto it = find(computadoras.begin(), computadoras.end(), c);
    if(it == computadoras.end()){
        return nullptr;
    }
    else{
        return &(*it);
    }
}

void Laboratorio::borrarUltimo(){
    computadoras.pop_back();
}