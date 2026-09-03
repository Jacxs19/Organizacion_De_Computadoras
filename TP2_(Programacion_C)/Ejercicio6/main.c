#include <stdio.h>
#include <stdlib.h>


/*Implemente un procedimiento que, dado un arreglo de enteros arr y dos enteros a y n,
modifique el arreglo arr de forma tal que cada aparici´on del entero a sea reemplazada por
el entero n. */

void reemplazar1(int arr [], int a, int n){
    for(int i=0; i<5;i++){
        if(arr[i]==a)
            arr[i]=n;
        printf("%d",arr[i]);
    }
}
void reemplazar2(int * arr, int a, int n, int size){
    for(int i=0; i<size; i++){
        if(*(arr+i)==a)
            *(arr+i)=n;
        printf("%d",*(arr+i));
    }
}

int main()
{
    int opcion, arreglo[5];
    printf("Ingrese la opcion de reemplazar: ");
    scanf("%d",& opcion);
    for(int i=0;i<5;i++){
        arreglo[i]=i+1;
    }
    if(opcion == 1){
        reemplazar1(arreglo,3,0);
    }
    if(opcion==2){
        reemplazar2(arreglo,3,0,5);
    }
    return 0;
}
