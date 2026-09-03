#include <stdio.h>
#include <stdlib.h>

int main()
{
    //inciso a
    void inicializacion_de_arreglo(int arreglo[], int n){
        for(int i=0;i<n;i++){
            arreglo[i]=rand();
        }
    }

    //inciso b
    void orden_ascendente(int arreglo[], int n) {
    int aux;
    for(int i = 0; i < n - 1; i++) {                //Recorro el arreglo una vez
        for(int j = 0; j < n - i - 1; j++) {        //Si movi, recorro el arreglo todo hasta el final para ordenar todo.
            if(arreglo[j] > arreglo[j + 1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    //inciso c
    int estan_ascendente(int arreglo[], int n){
        for(int i=0; i<n-1; i++){
            if(arreglo[i]>arreglo[i+1])
                return 0;
        }
        return 1;
    }

    //inciso d

    void intercalar_arreglos(int A1[], int A2[], int n1, int n2, int arreglo_final[]){
        int aux, tamanioA1=0, tamanioA2=0, i=0;
        while(tamanioA1<n1 && tamanioA2<n2){

            if(A1[tamanioA1]<=A2[tamanioA2]){
                    if(i==0 || arreglo_final[i-1]!=A1[tamanioA1]){         //Control para ver que no esta repetido
                        arreglo_final[i]=A1[tamanioA1++];
                        i++;
                    }
            }
            else if(A2[tamanioA2]<=A1[tamanioA1]){
                    if(i==0 || arreglo_final[i-1]!=A2[tamanioA2]){         //Control para ver que no esta repetido
                        arreglo_final[i]=A2[tamanioA2++];
                        i++;
                    }
            }
        }

        if(tamanioA1<n1){                                               //Si se termino de copiar A2, copio todo A1
            for(int j= tamanioA1 ; j<n1; j++){
                if(i==0 || arreglo_final[i]!=A1[j]){
                    arreglo_final[i]=A1[j];
                    i++;
                }
            }
        }
        if(tamanioA2<n2){                                               //Si se termino de copiar A1, copio todo A2
            for(int k= tamanioA2 ; k<n2; k++){
                if(i==0 || arreglo_final[i]!=A2[k]){
                    arreglo_final[i]=A2[k];
                    i++;
                }
            }
        }

    }





}






}
