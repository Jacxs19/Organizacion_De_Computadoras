#include <stdio.h>
#include <stdlib.h>

int calculo_mediano(long num, long pos){
    if(num>=0 && num<=9 && pos%2 ==0){                          //CB1: El numero tiene un solo digito y se encuentra en una posicion par, calculo_mediano(num,pos)= -num
        return -num;
    }
    if(num>=0 && num<=9 && pos%2 !=0){                          //CB2: El numero tiene un solo digito y se encuentra en una posicion impar, calculo_mediano(num,pos)= num
        return num;
    }
    int ultimo_digito=num%10;
    if(pos%2!=0){                                               //CR1: El numero tiene 2 o mas digitos y se ecuentra en una posicion impar, calculo_mediano(num,pos)= calculo_mediano(num/10,++pos) + ultimo_digito
        return calculo_mediano(num/10,++pos) + ultimo_digito;
    }
    else                                                        //CR2: El numero tiene 2 o mas digitos y se encuentra en una posicion par, calculo_mediano(num,pos)= caluclo_mediano(num/10,++pos) - ultimo_digito
        return calculo_mediano(num/10,++pos) - ultimo_digito;
}



int main()
{
    long mediano,numero;
    printf("Ingrese un entero para calcular su mediano: ");
    scanf("%ld",& numero);
    mediano= calculo_mediano(abs(numero),1);
    printf("El mediano del numero: %ld , es: %ld ", numero, mediano);
}
