#include <stdio.h>
#include <stdlib.h>

float celsius, fahrenheit;

int main()
{
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f",& celsius);
    fahrenheit=(celsius *1.8)+32;
    printf("%.2f Celsius = %.2f Fahrenheit.", celsius, fahrenheit);
    return 0;
}
