#include "laboratorio.h"
#include <fstream>

Laboratorio::Laboratorio()
{
    lab = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (lab<5){
        arreglo[lab] = c;
        lab++;
    }
    else{
        cout<<"El arreglo esta lleno"<<endl;
    }
}

void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(10)<<"Marca";
    cout<<setw(20)<<"Sistema operativo";
    cout<<setw(10)<<"Usuario";
    cout<<setw(10)<<"Memoria RAM";
    cout<<endl;
    for(size_t i=0;i<lab;i++){
        Computadora &c = arreglo[i];
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
        for(size_t i=0;i<lab;i++){
            Computadora &c = arreglo[i];
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
