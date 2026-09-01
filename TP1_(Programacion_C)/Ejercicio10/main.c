#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 10. Diremos que una palabra es palındroma, si la misma puede leerse de igual forma de izquierda a derecha que de
  derecha a izquierda.Teniendo esto en cuenta, dise˜nar e implementar un planteo recursivo que a partir de una secuencia
  de caracteres ingresada por el usuarioque representa la palabra, determine si esta es palındroma. */

int es_palindroma(char palabra[], int izquierda, int derecha) {
/*En vez de modificar físicamente la palabra, vamos a trabajar con dos posiciones: izquierda y derecha
  Inicialmente:izquierda = 0; derecha = longitud - 1; Para "radar": izquierda = 0; derecha = 4
  Después de comparar los extremos hacemos: izquierda + 1; derecha - 1
  Así nos vamos acercando hacia el centro. */

    if (izquierda >= derecha) { /* caso base */
        return 1;
    }

    if (palabra[izquierda] != palabra[derecha]) {
        return 0;
    }

    return es_palindroma(palabra, izquierda + 1, derecha - 1);
}


int main(){
    char palabra[100];
    int longitud;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    if (es_palindroma(palabra, 0, longitud - 1)) {
        printf("La palabra es palindroma.\n");
    } else {
        printf("La palabra no es palindroma.\n");
    }

    return 0;
}
