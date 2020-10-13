#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    lab = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (lab<5)
    {
        arreglo[lab] = c;
        lab++;
    }
}

void Laboratorio::mostrar()
{
    for(size_t i=0;i<lab;i++){
        Computadora &c = arreglo[i];
        cout<<"COMPUTADORA"<<endl;
        cout<<"Marca: "<<c.getMarca()<<endl;
        cout<<"Sistema operativo: "<<c.getSistema_operativo()<<endl;
        cout<<"Usuario: "<<c.getUsuario()<<endl;
        cout<<"Memoria RAM: "<<c.getMemoria_RAM()<<endl;
        cout<<endl;
    }
}
