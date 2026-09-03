#include <stdio.h>
#include <stdlib.h>

int main()
{
    char archivo1[50], archivo2[50];
    printf("Ingrese el nombre del primer archivo: ");
    scanf("%s",& archivo1);
    printf("Ingrese el nombre del segundo archivo: ");
    scanf("%s",& archivo2);

    FILE *f1 = fopen(archivo1, "r" );
    FILE *f2 = fopen(archivo2, "a" );
    if(f1==NULL || f2==NULL){
        printf("Uno de los archivos no existe.");
        return 0;
    }
    else{
        printf("",f1)

    }

}
