#include <stdio.h>
#include <stdlib.h>

float millas, kilometros;

int main(){
    printf("Ingrese las millas/hora: ");
    scanf("%f",& millas);

    kilometros= millas / 37.28232713;
    printf("%.5f millas/hora = %.5f kilometros/minuto.", millas,kilometros);
    return 0;
}
