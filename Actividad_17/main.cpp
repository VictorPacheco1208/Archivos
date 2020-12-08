#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <bits/stdc++.h>


#include "videoGame.h"
using namespace std;

int main() {
    VideoGame v;
    //vector<Civilizacion> civilizaciones;
    //vector<VideoGame> usuarios;
    string op;

    while (true)
    {
        cout<<"------CIVILIZACIONES------"<<endl;
        cout << "1) Agregar Usuario" << endl;
        cout << "2) Agregar Civilizacion" << endl;
        cout << "3) Insertar Civilizacion" << endl;
        cout << "4) Crear Civilizaciones" << endl;
        cout << "5) Mostrar Primera" << endl;
        cout << "6) Mostrar Ultima" << endl;
        cout << "7) Ordenar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Buscar" << endl;
        cout << "10) Modificar" << endl;
        cout << "11) Mostrar" << endl;
        cout << "12) Mostrar totales" << endl;
        cout << "13) Salir" << endl;
        getline(cin, op);


        if(op == "1"){    
            string nam;
            cout << "Nombre del usuario: ";
            getline(cin,nam);
            v.agregarUser(nam);
            cout << endl << endl << "Presione enter para volver al menu..." << endl;
            cin.get();
            cout << "---------------------------------------------------" << endl;
        }


        else if(op == "2"){
            Civilizacion c;
            cin >> c;
            v.agregarCivilizacion(c); 
            cout << endl << "Presione enter para volver al menu..." << endl;
            cin.get();
            cin.get();
            cout << "---------------------------------------------------" << endl;
        } 


        else if(op == "3"){
            Civilizacion c;
            cin >> c;
            size_t pos;
            cout << "Posicion: ";
            cin >> pos; cin.ignore();
            if (pos >= v.size()) {
                cout << "Posicion no válida" << endl;
                cout << endl << "Presione enter para volver al menu..." << endl;
                cin.get();
                cout << "---------------------------------------------------" << endl;
            }
            else {
                v.insertar(c, pos);
                cout << endl << "Presione enter para volver al menu..." << endl;
                cin.get();
                cout << "---------------------------------------------------" << endl;
            }
        }
       
       
        else if(op == "4") {
            Civilizacion c;
            cin >> c;
            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();
            v.inicializar(c, n);
            cout << "---------------------------------------------------" << endl;
        }


        else if(op == "5"){
            if(v.empty()){
                 cout << "Vector esta vacio." << endl;
            }
            else{
                cout << "La primera civilizacion es: " << endl;
                Civilizacion civi = v.front();
                cout << civi << endl;
                cout << endl << "Presione enter para volver al menu..." << endl;
                cin.get();
                cout << "---------------------------------------------------" << endl;
            }
        }
        
        
        else if(op == "6"){
            if(v.empty()){
                 cout << "Vector esta vacio." << endl;
            }
            else{
                cout << "La ultima civilizacion es: " << endl;
                cout << v.back() << endl;
                cout << endl << "Presione enter para volver al menu..." << endl;
                cin.get();
                cout << "---------------------------------------------------" << endl;
            }
        }
       
       
        else if(op == "7"){
            int opcion;
            cout << endl << "Como deseas ordenar?" << endl;
            cout<<"1)Nombre.\n2)Ubicacion X.\n3)Ubicacion Y.\n4)Puntuacion.\n";
            cin>>opcion;
            cin.ignore();
            if(opcion == 1){
                v.ordenarNombre();
            }
            else if(opcion == 2){
                v.ordenarUbicacionX();
            }
            else if(opcion == 3){
                v.ordenarUbicacionY();
            }
            else if(opcion == 4){
                v.ordenarPuntuacion();
            }
            else{
                cout <<endl << "Opcion no valida." << endl;
            }

        }
        
       
        else if(op == "8") {
            Civilizacion c;
            string civi;
            cout << endl << "Que civilizacion desea eliminar?" << endl;
            getline(cin, civi);
            c.setNombre(civi);
            v.eliminar(civi);
            cout << "Eliminando..." << endl;
            cout << endl << "Presione enter para volver al menu..." << endl;
            cin.get();
            cout << "---------------------------------------------------" << endl;
        }
        
       
        else if(op == "9") {
            Civilizacion c;
            string civi;
            cout << endl << "Que civilizacion desea buscar?" << endl;
            getline(cin, civi);
            c.setNombre(civi);

            Civilizacion *ptr = v.buscar(c);

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << "Se encontro lo siguiente: " << endl;
                cout << *ptr << endl;
            }
            cout << endl << "Presione enter para volver al menu..." << endl;
            cin.get();
            cout << "---------------------------------------------------" << endl;
        }
       
      
        else if(op == "10"){
            Civilizacion c;
            string civi;
            cout << endl << "Que civilizacion desea modificar?" << endl;
            getline(cin, civi);
            c.setNombre(civi);
            //cin >> c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if (ptr == nullptr) {
                cout << "No se encontro" << endl;
            }
            else {
                cout << endl << "Se encontro coincidencias con: " << endl;
                //cout << *ptr << endl;
            }
            int modA;
            string nombre;
            float ubix;
            float ubiy;
            int puntuacion;
            
            if(ptr != nullptr){
                while(true){
                    cout << endl;
                    cout << *ptr << endl;
                    cout << endl << "Que atributo deseas modificar?: " << endl;
                    cout << "1)Nombre\n2)Ubicación X\n3)Ubicacion Y\n4)Puntuacion\n5)Salir\nOpcion:" << endl;
                    cin>>modA;
                    if(modA == 1){
                    cin.ignore();
                    cout << "Dame el nuevo nombre: ";
                    getline(cin, nombre);//cin.ignore();
                    ptr->setNombre(nombre);
                    //cin.ignore();
                    }
                    else if(modA == 2){
                        cout << "Dame la nueva ubicacion en X: ",
                        cin >>ubix;cin.ignore();
                        ptr->setUbicacionX(ubix);
                    }
                    else if(modA == 3){
                        cout << "Dame la nueva ubicacion en Y: ",
                        cin >>ubiy;cin.ignore();
                        ptr->setUbicacionY(ubiy);
                    }
                    else if(modA == 4){
                        cout << "Dame la nueva puntuacion: ",
                        cin>>puntuacion;cin.ignore();
                        ptr->setpuntuacion(puntuacion);
                    }
                    else if(modA == 5){
                        break;
                    }
                    else{
                        cout << endl << "Opcion no valida." << endl;
                    }
                }
                cout << endl << "Presione enter para volver al menu..." << endl;
                cin.get();
                cout << "---------------------------------------------------" << endl;
            }
            else{
                cout << "No encontrado" << endl;
            }        
        }


        else if(op == "11") {
            int op11;
            cout << endl << "Que desea ver?\n1)Usuario.\n2)Civilizaciones\nOpcion: ";
            cin>>op11;
            cout << endl;
            if(op11==1){
                cin.ignore();
                if(v.emptyU()){
                cout << endl << "No se ha registrado ningun usuario" << endl << endl;
                }
                else{
                    v.mostrarUsuario();
                    cout << endl << "Presione enter para volver al menu..." << endl;
                    cin.get();
                    cout << "---------------------------------------------------" << endl;
                }
            }
            else if(op11==2){
                cin.ignore();
                if(v.empty()){
                cout << endl << "No se han registrado civilizaciones." << endl << endl;
                }
                else{
                    //v.mostrarUsuario();
                    v.mostrar();
                    cout << endl << "El total de civilizaciones registradas es: " << endl;
                    cout << v.size() << endl << endl;
                    cout << endl << "Presione enter para volver al menu..." << endl;
                    cin.get();
                    cout << "---------------------------------------------------" << endl;
                }
            }
            else{
                cout << "Opcion no valida." << endl;
            }
            
        }
       
       
        else if(op == "12") {
            if(v.empty()){
                cout << endl << "No se han registrado civilizaciones." << endl << endl;
            }
            else{
                cout << "El total de civilizaciones registradas es: " << endl;
                cout << v.size() << endl << endl;
            } 
            cout << endl << "Presione enter para volver al menu..." << endl;
            cin.get();
            cout << "---------------------------------------------------" << endl;
        }

      
        else if(op == "13"){
            break;
        }
    }

    return 0;
}