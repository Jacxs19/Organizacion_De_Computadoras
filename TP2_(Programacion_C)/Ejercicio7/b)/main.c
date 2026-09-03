#include <stdio.h>
#include <stdlib.h>

int main()
{

     void invertir_arr_punt(int * arr [], int size){        //arr es un arreglo de punteros
        int f = 0, c = size - 1;
        int * aux;
        while(f < c){
            aux = arr[f];
            arr[f++] = arr[c];
            arr[c--] = aux;
        }
    }

}
