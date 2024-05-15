// Laboratorio 4 - Ejercicio1 -- Valeria Jarquin Vargas, B83986
#include<stdio.h>

// Funcion de busqueda lineal dentro del arreglo
int searchLineal(int num, int arreglo[], int longitud){
    // Se recorre el arreglo
    for(int i = 0; i < longitud; i++){
        // Se verifica si el numero ingresado se encuentra en el arreglo
        if (arreglo[i] == num){
            printf("Busqueda lineal: el numero %d se encuentra en la posicion %d del arreglo.\n", num, i);
            return i;
        }
    };
    printf("Busqueda lineal: el numero %d no se encuentra en el arreglo.\n", num);
    return 1;
    
}

// Funcion de busqueda binaria dentro del arreglo
int searchBinaria(int num, int arreglo[], int longitud){
    int a = 0;
    int b = longitud - 1;
    int c;

    // Se recorre el arreglo
    while(a <= b){
        c = a + (b-a)/2;
        // Si el numero se encuentra en c, devuelve verdadero
        if(arreglo[c] == num){
            printf("Busqueda binaria: el numero %d se encuentra en la posicion %d del arreglo.\n", num, c);
            return c;
        // Si el numero es menor que c, busca en la mitad derecha del arreglo
        } else if (arreglo[c] < num){
            a = c + 1;
        // De otra manera, busca en la mitad izquierda del arreglo
        } else{
            b = c - 1;
        }
    }

    printf("Busqueda binaria: el numero %d no se encuentra en el arreglo.\n", num);
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
    searchBinaria(num, arreglo, longitud);
    
    return 0;

}