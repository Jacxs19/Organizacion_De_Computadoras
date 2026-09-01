#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char lectora;
int resultado;

int control(char caracter){
    if(caracter>='0' && caracter<='9')
            return caracter - 48;               //48=0 en tabla ASCII
    if(caracter>='A' && caracter<='F'){
        return 10+(caracter - 65);              //65=A en tabla ASCII
    }
    if(caracter>='a' && caracter<='f'){
        return 10 +(caracter - 97);             //97=a en tabla ASCII
    }
    printf("Error, el numero ingresado no esta en notacion hexadecimal. ");
    exit(0);
}

int main(){
    printf("Ingrese la cadena de caracteres: ");
    lectora= getchar();
    while(lectora!='\n'){
        resultado = (resultado * 16) + control(lectora);                            //Voy corriendo hacia la izquierda cada numero, Conversion de enteros: Multiplicacion
        lectora=getchar();
    }
    printf("El numero pasado por consola en notacion hexadecimal, su resultado en notacion decimal es : %d ",resultado);
    return 0;
}
