#include <stdio.h>
#include <stdlib.h>
 
void mostrar(int n, char arreglo[]){
    for(size_t i=0; i<n; i++){
        printf("%s\n", arreglo);
    }
}

struct personaje{
    char nombre[100],tipo[100], fuerza[100], salud[100];
}Personajes[5];
 
int main(){
    float promedio=0;
    int datos[5], suma=0, opc, per, i, n, b;
    char respuesta , a[5], arreglo[20];

    do{
            printf("***************************BIENVENIDO***************************\n");
            printf("1-Para capturar numeros y calcular la suma total y el promedio\n");
            printf("2-Para ejecutar la funcion implementada\n");
            printf("3-Para asignar atributos a personajes\n");
            printf("Selecciona entre los 3 programas: ");
            scanf("%i", &opc);
            printf("\n");
        
        switch(opc){
            case 1:
                for(i=0; i<5; i++){
                    printf("Escribe el elemento %i: ", i+1);
                    scanf("%i", &datos[i]); 
                    suma += datos[i];
                }   
                    promedio += suma/5.0;
                printf("\n");
                printf("Estos son los numeros que escribiste: [%i,%i,%i,%i,%i]\n", datos[0], datos[1], datos[2], datos[3], datos[4]);       
                printf("Resultado de la suma total: %i\n", suma);
                printf("Resultado del promedio: %.2f\n\n\n", promedio);
                break;  
                
            case 2:
                printf("Escribe una cadena de hasta 20 caracteres: ");
                fflush(stdin);
                fgets(arreglo, sizeof(arreglo), stdin);
                printf("¿Cuantas veces quieres que se repita? ");
                scanf("%i", &n);
                mostrar(n, arreglo);
                break;
                    
            case 3:
                do{
                    printf("�Cuantos personajes deseas almacenar? ");
                    scanf("%i",&per);
                    fflush(stdin);
                        if(per>5){
                            printf("No puedes almacenar mas de 5 personajes\n");
                            }
                }while(per>5);
                    
                for(i=0; i<per; i++){
                    printf("Escribe el nombre del personaje %i: \n", i+1);
                    gets(Personajes[i].nombre);
                    printf("Escribe el tipo del personaje %i: \n", i+1);
                    gets(Personajes[i].tipo);
                    printf("Escribe la fuerza del personaje %i: \n", i+1);
                    gets(Personajes[i].fuerza);
                    printf("Escribe la salud del personaje %i: \n", i+1);
                    gets(Personajes[i].salud);
                    }
                for(i=0; i<per; i++){
                    printf("El nombre del personaje numero %i es: %s\n", i+1, Personajes[i].nombre);
                    printf("El tipo de personaje numero %i es: %s\n", i+1, Personajes[i].tipo);
                    printf("La fuerza del personaje numero %i es: %s\n", i+1, Personajes[i].fuerza);
                    printf("La salud del personaje numero %i es: %s\n", i+1, Personajes[i].salud);
                    printf("\n");
                    }   
                break;
            }
            fflush(stdin);
            printf("Presiona la letra v para volver a escoger alguna opcion: ");
            scanf("%c",&respuesta);
            printf("\n");
        }while(respuesta == 'v' || respuesta == 'V');
    
    system("pause");
    return 0;
}
