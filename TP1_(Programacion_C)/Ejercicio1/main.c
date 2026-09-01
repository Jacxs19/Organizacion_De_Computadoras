#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dia, mes, anio, diasMaximos;
bool esBisiesto;

int main(){
    printf("Ingrese el dia: ");
    scanf("%d",&dia);
    if(dia<1 || dia>31){
        printf("El dia ingresado no es correcto.");
        return 0;
    }
    printf("Ingrese el mes: ");
    scanf("%d",&mes);
    if(mes<1 || mes>12){
        printf("El mes ingresado no es correcto.");
        return 0;
    }
    printf("Ingrese el año: ");
    scanf("%d",&anio);
    if(anio<0){
        printf("El año ingresado no es correcto");
        return 0;
    }
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
            esBisiesto=true;
    }
    else{
        esBisiesto=false;
    }
    if(mes==2){
        if(esBisiesto){
            diasMaximos = 29;
        } else {
            diasMaximos = 28;
        }
    }
    else if(mes==4 || mes==6 || mes==9 || mes==11){
        diasMaximos = 30;
    }
    else {
        diasMaximos = 31;
    }
    if(dia > diasMaximos){
        printf("La fecha ingresada no existe.");
        return 0;
    }

    printf("La fecha ingresada es correcta. Dia %d , mes %d , año %d",dia,mes,anio);
    return 0;
}
