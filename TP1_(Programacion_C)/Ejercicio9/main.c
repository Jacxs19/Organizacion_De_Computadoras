#include <stdio.h>
#include <stdlib.h>

int es_ascendente(long numero){
    if(numero/10==0)                                //CB1: Si el numero tiene un solo digito, entonces es_ascendente(numero)=1 (verdadero)
        return 1;
    else{
        long ultimo=numero%10;
        long ante_ultimo=(numero/10)%10;
        if(ante_ultimo<ultimo)                      //CR: Si el anteultimo digito es menor al ultimo digito, entonces es_ascendente(numero)=es_ascendente(numero/10),
            return es_ascendente(numero/10);
        else
            return 0;                               //CB2: Si el anteultimo digito es mayor o igual al ultimo digito, entonces es_ascendente(numero)=0        (Falso)
    }
}
int es_descendente(long numero){                    //Algoritmo es_descendente
    if(numero/10==0)                                //CB1: Si el numero tiene un solo digito, entonces es_descendente(numero)=1
        return 1;
    else{
        long ultimo=numero%10;
        long ante_ultimo=(numero/10)%10;
        if(ante_ultimo>ultimo)                      //CR: Si el anteultimo digito es mayor al ultimo digito, entonces es_descendente(numero)=es_descendente(numero/10)
            return es_descendente(numero/10);
        else
            return 0;                               //CB2: Si el anteultimo digito es menor o igual al ultimo digito, entonces es_descendente(numero)=0
    }
}

int main()
{
    long n;
    printf("Ingrese un numero entero: ");
    scanf("%ld",& n);

    if(es_ascendente(labs(n)) ==1 || es_descendente(labs(n)) ==1 ){
        printf("El numero: %ld es prolijo",n);
    }
    else
        printf("El numero: %ld NO es prolijo",n);
    return 0;
}
