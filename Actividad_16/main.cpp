#include <iostream>
#include <vector>
#include <algorithm>
#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio lab;
    string opc;
    while (true)
    {
        cout << "1. Agregar computadora " << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Respaldar" << endl;
        cout << "4. Recuperar" << endl;
        cout << "5. Insertar" << endl;
        cout << "6. Inicializar" << endl;
        cout << "7. Eliminar" << endl;
        cout << "8. Ordenar" << endl;
        cout << "9. Buscar" << endl;
        cout << "10. Borrar ultimo" << endl;
        cout << "0. Salir" << endl;
        getline(cin, opc);

        if (opc == "1")
        {
            Computadora c;

            cin >> c;
            cin.ignore();
            lab.agregarFinal(c);
        }
        else if (opc == "2")
        {
            lab.mostrar();
        }
        else if (opc == "3")
        {
            lab.respaldar();
        }
        else if (opc == "4")
        {
            lab.recuperar();
        }
        else if (opc == "5")
        {
            Computadora c;

            cin >> c;

            size_t pos;
            cout << "Posicion: " ;
            cin >> pos;
            cin.ignore();

            if (pos >= lab.size())
            {
                cout << "Posicion no valida " << endl;
            }
            else
            {
                lab.insertar(c, pos);
            } 
        }
        else if (opc == "6")
        {
            Computadora c;

            cin >> c;

            size_t tam;
            cout << "Cantidad de elementos: " ;
            cin >> tam;
            cin.ignore();

            lab.inicializar(c, tam);
        }
        else if (opc == "7")
        {
            size_t pos;
            cout << "Posicion: ";
            cin >> pos;
            cin.ignore();

            if (pos >= lab.size())
            {
                cout << "Posicion no valida " << endl;
            }
            else
            {
                lab.eliminar(pos);
            }
        }
        else if (opc == "8")
        {
            lab.ordenar();
        }
        else if (opc == "9")
        {
            Computadora c;
            cin >> c;
            cin.ignore();
            Computadora *ptr = lab.buscar(c);

            if (ptr == nullptr) 
            {
                cout << "Computadora no encontrada" << endl;
            }
            else
            {
                cout << *ptr << endl;
            }   
        }
        else if (opc == "10")
        {
            lab.borrarUltimo();
        }
        else if (opc == "0")
        {
            break;
        } 
    }
    return 0;
}