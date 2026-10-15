#include <stdio.h>

int a = 0;// representa la cantidad de llamadas a la función

int ackerman(int m, int n) {
    a++; 
    if (m == 0) { return n + 1;} 
    else if (m > 0 && n == 0) { return ackerman(m - 1, 1);} 
    else { return ackerman(m - 1, ackerman(m, n - 1));}
}

int main() {
    a = 0; 
    int resultado = ackerman(3, 4);
    
    printf("El resultado de Ackermann(3, 4) es: %d\n", resultado);
    printf("La funcion se llamo un total de %d veces\n", a);
    
    return 0;
}