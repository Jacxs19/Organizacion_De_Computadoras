#include <stdio.h>
#include <stdlib.h>

int npares_en_pos_impares(int num, int pos){
    if(num>=0 && num<=9){                       //CB1: Si tiene un solo digito y el numero es par y se encuentra en una posicion impar retorno 1;
        if(num%2==0 && pos%2!=0)                //CB2: Si tiene un solo digito y el numero no es par o no se encuentra en una posicion impar retorno 0
            return 1;
        return 0;
    }
    int ultimo_dig=num%10;
    if(ultimo_dig %2 ==0 && pos%2!=0){                      //CR1: Si el ultimo digito es par y se encuentra en una posicion impar retorno 1 + npares_en_pos_impares(num/10, ++pos)
        return 1+ npares_en_pos_impares(num/10 , ++pos);
    }
    return npares_en_pos_impares(num/10 , ++pos);           //CR2: Si el ultimo digito no es par o no se encuentra en una posicion impar retorno npares_en_pos_impares(num/10, ++pos)
}


int main()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d",& n);
    int cant_npares_en_pos_impares = npares_en_pos_impares(abs(n),1);
    printf("La cantidad de numeros pares en posiciones impares del numero: %d , son %d numeros", n, cant_npares_en_pos_impares);
}
