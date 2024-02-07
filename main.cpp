#include <iostream>
/*
 * EJERCICIO 1
 * Nombre: Yennifer Maria de Leon Samuc
 * Registro Academico No. 202231084
 * */

void showArray(int array[], int size){
    for (int i = 0; i < size; ++i) {
        if(i==size-1){
            printf("%d", array[i]);
        }else{
            printf("%d,", array[i]);
        }

    }
}

int main() {
    int array[10] = {5,3,9,8,5,1, 83, 0, 1, 9};
    int size = sizeof(array) / sizeof(int);

    printf("Array inicial: ");
    showArray(array, size);
    printf("\n\n");

    /**************************************************************************
     * ORDENAMIENTO DE BURBUJA --- ANALISIS DE LA COMPLEJIDAD DEL ALGORITMO
     **************************************************************************/
    for (int i = 0; i < size - 1; i++) { //se llama 'size' cantidad de veces

        for (int j = i + 1; j < size; j++) { //En el peor de los casos se ejecutaria
            if (array[i] > array[j]) {  //este bloque de codigo 'size' cantidad de veces
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

    }
    //podemos concluir que la complejidad algoritmica del ordenamiento de burbuja es size*size veces
    //lo que es igual a 'size^2' del arreglo.

    printf("Ordenamiento de burbuja terminado: ");
    showArray(array, size);
    return 0;
}
