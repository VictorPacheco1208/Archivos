#include <iostream>
#include "laboratorio.h"
using namespace std;


int main(){
    Computadora c1 = Computadora("Apple", "MacOs", "Jorge", 16); //La Memoria_RAM es en GB

    Computadora c2;
    c2.setMarca("Acer");
    c2.setSistema_operativo("Linux");
    c2.setUsuario("Victor");
    c2.setMemoria_RAM(8); 

    Computadora c3 = Computadora("Hp", "Windows", "Ivan", 8);

    Computadora c4;
    c4.setMarca("Toshiba");
    c4.setSistema_operativo("Windows");
    c4.setUsuario("Juan");
    c4.setMemoria_RAM(4);

    Computadora c5 = Computadora("Asus", "Linux", "Alan", 16);

    Laboratorio lab;
    lab.agregarFinal(c1);
    lab.agregarFinal(c2);
    lab.agregarFinal(c3);
    lab.agregarFinal(c4);
    lab.agregarFinal(c5);
    lab.mostrar();

    return 0;
}
