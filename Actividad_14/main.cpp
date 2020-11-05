#include <iostream>
#include "ArregloDinamico.h"
#include "computadora.h"

using namespace std;

int main(){

    Arreglo<Computadora> compu;
    Computadora c1("Asus", "Windows", "Victor", 8);
    Computadora c2("Apple", "MacOs", "Adrian", 16);
    Computadora c3("Apple", "MacOs", "Ivan", 8);
    Computadora c4("Asus", "Windows", "Jorge", 32);
    Computadora c5("Hp", "Linux", "Juan", 16);
    compu << c1 << c2 << c3 << c2 << c2;
    
    Computadora c6("Asus", "Linux", "Adrian", 16);
    Computadora *ptr2 = compu.buscar(c6);
    if (ptr2 != nullptr){
        cout << "Elemento encontrado: " << endl;
        cout << *ptr2 << endl;
    }
    else
    {
        cout << "Elemento no encontrado" << endl;
    }

    Arreglo<Computadora *> ptrs = compu.buscar_todos(c6);
    cout << "\nTodos los elementos:" << endl;
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }
    else
    {
        cout << "Elemento no encontrado" << endl;
    }
    
    /* Arreglo<string> arreglo;
    arreglo.insertar_final("Prueba");
    arreglo.insertar_final("de");
    arreglo.insertar_inicio("el");
    arreglo.insertar_inicio("programa");
    arreglo.insertar("ELEMENTO", 2); 
    arreglo.eliminar_final();
    arreglo.eliminar_inicio();
    arreglo.eliminar(1);  
    string *s = arreglo.buscar("de");
    cout<<s<<" "<<*s<<endl;
    *s="PC";
    
    for(size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    } 
    */
    
    return 0;
}   