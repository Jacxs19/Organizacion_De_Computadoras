#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int apariciones(int num, int dig){
    if(num>=0 && num<=9 && num!=dig){                   //CB1: "El numero tiene un solo digito y no es el buscado"
        return 0;
    }
    else if(num>=0 && num<=9 && num==dig){              //CB2: "El numero tiene un solo digito y es el buscado"
        return 1;
    }
    int ultimo_numero = num%10;
    if(ultimo_numero == dig)
        return 1 + apariciones(num/10 , dig);           //CR1: "El numero tiene 2 o mas digitos, y el ultimo digito del numero es el buscado
    else
        return apariciones(num/10, dig);                //CR2: "El numero tiene 2 o mas digitos, y el ultimo digito del numero no es el buscado
}

int main()
{
    int n,d;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    printf("Ingrese un digito a buscar: ");
    scanf("%d",&d);
    if(d<0 || d>9){
        printf("Error, no se ingreso un digito");
        return 0;
    }
    int cant= apariciones(abs(n),d);
    printf("La cantidad de apariciones del digito: %d en el numero: %d es de %d veces",d,n,cant);
    return 0;
}
