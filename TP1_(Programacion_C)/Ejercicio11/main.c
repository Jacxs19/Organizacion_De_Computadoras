#include <stdio.h>
#include <stdlib.h>
int sorpresa_1(int a, int b){                           //Esta funcion se encarga de calcular a^b (multiplica b por si mismo b veces)
    int toReturn;
    if (b == 0) toReturn = 1;
    else toReturn = sorpresa_1(a, b-1) * a;
    return toReturn;
}
int sorpresa_2(int a){                                  //Esta funcion se encarga de contar y devolver la cantidad de digitos que tiene
    int toReturn;
    if (a < 10) toReturn = 1;
    else toReturn = 1 + sorpresa_2( a/10 );
    return toReturn;
}
    int sorpresa_3(int a){                                              //Su funcion es invertir el orden de los digitos del numero original,
    int toReturn, aux;                                                  //extrae su ultimo digito, llama a sorpresa_2 para saber cuantos 0`s necesita
    if (a < 10) toReturn = a;                                           //y utiliza sorpresa_1 para multiplicar ese digito suelto por la potencia de 10 correspondiente
    else{                                                               //y luego suma recursivamente el resto de los digitos ya procesados
        aux = sorpresa_3(a/10);
        toReturn = (a % 10) * sorpresa_1(10,sorpresa_2(a)-1) + aux;
    }
    return toReturn;
}

int main(){
    printf("%d", sorpresa_3(12856));
    return 0;
}
