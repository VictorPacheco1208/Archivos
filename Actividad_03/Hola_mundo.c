#include <stdio.h>

int main(){
    char nombre[100];

    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    return 0;
}
