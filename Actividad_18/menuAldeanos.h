#include "civilizacion.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

Aldeano capturar()
{
    Aldeano ald;
    string nombre;
    string genero;
    size_t salud;
    size_t edad;

    cout << "Nombre: ";
    getline(cin, nombre);
    ald.setNombre(nombre);

    cout << "Genero: ";
    getline(cin, genero);
    ald.setGenero(genero);

    cout << "Salud: ";
    cin>>salud;
    ald.setSalud(salud);

    cout << "Edad: ";
    cin>>edad;
    ald.setEdad(edad);

    return ald;
}

void menu(Civilizacion &c)
{
    string op;
   
    do{
        cout<<"-----MENU DE ALDENOS-----"<<endl;
        cout << "1) Agregar aldeano" << endl;
        cout << "2) Eliminar aldeano" << endl;        
        cout << "3) Ordenar Aldeano" << endl;
        cout << "4) Buscar " << endl;
        cout << "5) Modificar aldeano" << endl;
        cout << "6) Mostrar" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);
      
        
        if(op == "1"){
            int op;
            cout << "Desea agregar al inicio o al final?\n1)Inicio\n2)Final\nOpcion: ";
            cin>>op;
            if(op==1){
                cin.ignore();
                c.agregarInicio(capturar());
            }
            else if(op == 2){
                cin.ignore();
                c.agregarFinal(capturar());
            }
         
        }else if(op == "2"){
            int op1;
            cout << "Como desea eliminar? " << endl;
            cout << "1)Por nombre.\n2)Por Salud menor a N\n3)Edad mayor a 60\nOpcion: ";
            cin>>op1;
            if(op1==1){
                cin.ignore();
                string nombre;

                cout << "Nombre: ";
                getline(cin, nombre);

                c.eliminarNombre(nombre);
            }
            else if(op1 == 2){
                size_t salud;

                cout << "Salud: ";
                cin>>salud; cin.ignore();

                c.eliminarSalud(salud);
            }
            else if (op1==3){
                c.eliminarEdad();
            }
            else{
                cout << "opcion no valida." << endl;
            }
            
        }else if(op == "3"){
            int op3;
            cout << "Como desea ordenar?" << endl;
            cout << "1)Por nombre\n2)Por edad\n3)Por salud\nOpcion: ";
            cin>>op3;
            if(op3 == 1){
                c.ordenarNombre();
            }
            else if(op3 == 2){
                c.ordenarEdad();
            }
            else if (op3 == 3){
               c.ordenarSalud();
            }
            else{
                cout << "opcion no valida." << endl;
            }
        }else if(op == "4"){
            Aldeano ald;
            string alde;
            cout << endl << "Que aldeano desea Buscar?" << endl;
            getline(cin, alde);
            ald.setNombre(alde);

            Aldeano *ptr = c.buscarA(ald);

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << endl << "Se encontro lo siguiente: " << endl;
                cout << *ptr << endl;
            }
            cout << endl << "Presione entrar para continuar..." << endl;
            cin.get();
           
        }else if(op == "5"){
            Aldeano ald;
            string aldeano1;
            cout << endl << "Que Aldeano desea Modificar?" << endl;
            getline(cin, aldeano1);
            ald.setNombre(aldeano1);
            Aldeano *ptr = c.buscarA(ald);

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else{               
                 cout << endl << "Se encontro coincidencias con: " << endl;
            }
            int modA;
            string nombre;
            string genero;
            size_t salud;
            size_t edad;
            if(ptr != nullptr){
                while(true){
                    cout << endl;
                    cout << *ptr << endl;
                    cout << endl << "Que atributo deseas modificar?: " << endl;
                    cout << "1)Nombre\n2)Genero \n3)Salud \n4)Edad\n5)Salir\nOpcion:" << endl;
                    cin>>modA;
                    if(modA == 1){
                    cin.ignore();
                    cout << "Dame el nuevo Nombre: ";
                    getline(cin, nombre);//cin.ignore();
                    ptr->setNombre(nombre);
                    //cin.ignore();
                    }
                    else if(modA == 2){
                        cin.ignore();
                        cout << "Dame el nuevo genero: ";
                        getline(cin, genero);//cin.ignore();
                        ptr->setGenero(genero);
                    }
                    else if(modA == 3){
                        cout << "Dame la nueva salud: ",
                        cin >>salud;cin.ignore();
                        ptr->setSalud(salud);
                    }
                    else if(modA == 4){
                        cout << "Dame la nueva edad: ",
                        cin>>edad;cin.ignore();
                        ptr->setEdad(edad);
                    }
                    else if(modA == 5){
                        break;
                    }
                    else{
                        cout << endl << "Opcion no valida." << endl;
                    }
                }
                cout << endl << "Presione entrar para continuar..." << endl;
                cin.get();
            }
            else{
                cout << "No encontrado" << endl;
            }    
        }else if(op == "6"){
            if(c.empty()){
                cout << endl << "No hay aldeanos." << endl;
            }
            c.print();
        }
        else{
            if(op != "0" ){
                cout << "no." << endl;
            }
        }
    cin.get();
    }while( op != "0");

}