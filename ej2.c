// Laboratorio 4 - Ejercicio2 -- Valeria Jarquin Vargas, B83986

#include<stdio.h>

int encontrarMin(int arreglo[], int longitud){
    int min = arreglo[0];

    // Se recorre el arreglo
    for(int i = 0; i < longitud; i++){
        // Compracion del elemento actual con el min, si es menor que min lo actualiza al elemento menor
        if(arreglo[i] < min){
            min = arreglo[i];
        }
    }
return min;
}

int encontrarMax(int arreglo[], int longitud){
    int max = arreglo[0];

    // Se recorre el arreglo
    for(int i = 0; i < longitud; i++){
        // Compracion del elemento actual con el max, si es mayor que max lo actualiza al elemento mayor
        if(arreglo[i] > max){
            max = arreglo[i];
        }
    }
return max;
}


int main(){
    int arreglo[] = {21,24,65,3,56,12,35,15};
    // Se calcula la cantidad de elementos en el arreglo
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    int min = encontrarMin(arreglo, longitud);
    printf("El valor mínimo es %d\n", min);

    int max = encontrarMax(arreglo, longitud);
    printf("El valor máximo es %d\n", max);
    

    return 0;
}