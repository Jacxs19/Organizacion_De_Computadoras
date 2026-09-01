#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long tiempo;
int horas,minutos,segundos,aux;

int main()
{
    printf("Ingrese el tiempo en segundos: ");
    scanf("%ld",&tiempo);
    if(tiempo<0){
        printf("Error, el tiempo ingresado en segundos no puede ser negativo.");
        return 0;
    }
    horas=tiempo/3600;
    aux=tiempo%3600;
    minutos=aux/60;
    segundos=aux%60;
    printf("El tiempo ingresado son %d : %d : %d", horas,minutos,segundos);
    return 0;
}
