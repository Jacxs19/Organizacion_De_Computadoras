#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cantNum, total;
float promedio;
long mayor, menor, actual;

int main(){

    mayor= LONG_MIN;
    menor= LONG_MAX;
    total=0;

    printf("Ingrese la cantidad de numeros enteros: ");
    scanf("%d",& cantNum);

    if(cantNum<=0){
        printf("Error, no se puede dividir por 0 o ingresar numeros negativos.");
        return 0;
    }
    for(int i=0; i<cantNum; i++){
        printf("Ingrese el %d numero:",i+1);
        scanf("%ld",&actual);

        total=total+actual;
        if(mayor<actual){
            mayor=actual;
        }
        if(menor>actual){
            menor=actual;
        }
    }

    promedio=(float) total/cantNum;

    printf("El mayor = %ld , El menor = %ld , y el promedio es = %.2f ",mayor,menor,promedio);
    return 0;

}
