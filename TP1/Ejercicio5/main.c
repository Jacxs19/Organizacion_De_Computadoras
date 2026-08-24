#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nroBinario,nroDecimal=0,actual;

int main()
{
    printf("Ingrese el numero en formato binario: ");
    scanf("%d",& nroBinario);
    if(nroBinario<0){
        printf("El nro binario no puede ser negativo");
        return 0;
    }
    int i=0;
    while(nroBinario!=0){
        actual=nroBinario%10;
        if(actual!=0 && actual!=1){
            printf("El numero ingresado no esta en formato Binario.");
            return 0;
        }
        nroDecimal=nroDecimal+(actual*(pow(2,i)));                      //Utilizo la funcion "pow" que viene de la libreria mat.h
        nroBinario=nroBinario/10;
        i++;
    }
    printf("El numero en formato decimal es el siguiente: %d", nroDecimal);
    return 0;
}
