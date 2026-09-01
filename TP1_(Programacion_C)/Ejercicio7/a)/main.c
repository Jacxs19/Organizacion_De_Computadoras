#include <stdio.h>
#include <stdlib.h>

int cantidad(int num){
    if(num>=-9 && num<=9)                   //CB: "El numero solo tiene un digito"
        return 1;
    else
        return 1+ cantidad (num/10);        //CR: "El numero tiene 2 o mas digitos"
}

int main()
{
    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d",& numero);
    int resultado = cantidad(numero);
    printf("El numero: %d tiene un total de %d digitos",numero,resultado);
    return 0;
}
