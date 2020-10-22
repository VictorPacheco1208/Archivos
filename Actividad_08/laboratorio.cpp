#include "laboratorio.h"

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
