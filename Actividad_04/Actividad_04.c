#include <stdio.h>
#include <stdlib.h>

int main(){
    float promedio=0;
    int datos[5], suma=0, opc, i;
    char respuesta;
    do{
            
            printf("1-Para capturar numeros y calcular la suma total y el promedio\n");
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
                break;    
            case 3:
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
