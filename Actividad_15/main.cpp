#include <iostream>
#include <vector>
#include <algorithm>
#include "laboratorio.h"
using namespace std;

int main(){
    vector<string> cadenas;
    string opcion;

    while (true)
    {
        cout<<"1) Agregar al final"<<endl;
        cout<<"2) Mostrar"<<endl;
        cout<<"3) Inicializar"<<endl;
        cout<<"4) Frente"<<endl;
        cout<<"5) Ultimo"<<endl;
        cout<<"6) Ordenar"<<endl;
        cout<<"7) Insertar"<<endl;
        cout<<"8) Eliminar"<<endl;
        cout<<"9) Eliminar ultimo"<<endl;
        cout<<"0) Salir"<<endl;
        getline(cin, opcion);

        if (opcion=="1")
        {
            string cadena;
            cout<<"Cadena: ";
            getline(cin, cadena);
            cin.ignore();
            cadenas.push_back(cadena);
        }
        else if(opcion=="2"){
            for(size_t i=0; i<cadenas.size();i++){
                cout<<cadenas[i]<<", ";
            }
            cout<<endl;
        }
        else if(opcion=="3"){
            size_t n;
            string cadena;

            cout<<"Tam: ";
            cin>>n;
            cout<<"Cadena: ";
            cin.ignore();
            getline(cin, cadena); cin.ignore();
            cadenas = vector<string>(n, cadena);
        }
        else if(opcion=="4"){
            if(cadenas.empty()){
                cout<<"El vector esta vacio"<<endl;
            }
            else{
                cout<<cadenas.front()<<endl;
            }
        }
        else if(opcion=="5"){
            if(cadenas.empty()){
                cout<<"El vector esta vacio"<<endl;
            }
            else{
                cout<<cadenas.back()<<endl;
            }
        }
        else if(opcion=="6"){
            sort(cadenas.begin(), cadenas.end());
        }
        else if(opcion=="7"){
            size_t p;
            string cadena;
            cout<<"Posicion: ";
            cin>>p;
            cout<<"Cadena: ";
            cin.ignore();
            getline(cin, cadena);
            cin.ignore();

            if(p>=cadenas.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                cadenas.insert(cadenas.begin()+p, cadena);
            }
        }
        else if(opcion=="8"){
            size_t p;
            cout<<"Posicion: ";
            cin>>p;
            cin.ignore();

            if(p>=cadenas.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                cadenas.erase(cadenas.begin()+p);
            }
        }
        else if(opcion=="9"){
            if(cadenas.empty()){
                cout<<"El vector esta vacio"<<endl;
            }
            else{
                cadenas.pop_back();
            }
        }
        else if(opcion=="0"){
            break;
        }
        

    }
    return 0;
}
