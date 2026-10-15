#include <stdio.h>
#include "racional.h"

int main() {
    int n1, d1, n2, d2;
    int n_res, d_res;

    printf(" Modulo de numeros racionales \n");
    
    printf("Ingrese la primera fracción:\n");
    printf(" Numerador: ");
    scanf("%d", &n1);
    printf(" Denominador: ");
    scanf("%d", &d1);

    printf("Ingrese la segunda fracción:\n");
    printf(" Numerador: ");
    scanf("%d", &n2);
    printf(" Denominador: ");
    scanf("%d", &d2);

    
    sumar(n1, d1, n2, d2, &n_res, &d_res);

    printf("\nResultado de la suma:\n");
    printf("(%d / %d) + (%d / %d) = %d / %d\n", n1, d1, n2, d2, n_res, d_res);

    return 0;
}