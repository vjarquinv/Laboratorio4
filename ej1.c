// Laboratorio 4 - Ejercicio1 -- Valeria Jarquin Vargas, B83986
#include<stdio.h>

// Funcion de busqueda lineal dentro del arreglo
int searchLineal(int num, int arreglo[], int longitud){
    // Se recorre el arreglo
    for(int i = 0; i < longitud; i++){
        // Se verifica si el numero ingresado se encuentra en el arreglo
        if (arreglo[i] == num){
            printf("El numero %d se encuentra en la posicion %d del arreglo.\n", num, i);
            return i;
        }
    };
    printf("El numero %d no se encuentra en el arreglo.\n", num);
    return 1;
    
}



int main(){
    int arreglo[] = {2,4,6,23,56,79};
    // Se calcula la cantidad de elementos en el arreglo
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    searchLineal(num, arreglo, longitud);

    return 0;

}