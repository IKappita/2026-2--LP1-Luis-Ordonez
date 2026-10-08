#include <stdio.h>
#include <stdlib.h>

int main() {
    //  Reserva de memoria
    int *a_m = malloc(10 * sizeof(int));
    
    int *a_c = calloc(10, sizeof(int));

    if (a_m == NULL || a_c == NULL) {
        return 1;
    }

    //  Imprimir contenido antes de inicializar
    printf("malloc(10) antes de inicializar: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a_m[i]);
    }
    printf("\n");

    printf("calloc(10) antes de inicializar: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a_c[i]);
    }
    printf("\n\n");

    //  Llenar  con cuadrados de 0 a 9
    for (int i = 0; i < 10; i++) {
        a_m[i] = i * i;
        a_c[i] = i * i;
    }

    printf("Tras llenar con cuadrados:\n");
    printf("malloc: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a_m[i]);
    }
    printf("\n");

    printf("calloc: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a_c[i]);
    }
    printf("\n\n");

    // Liberar ambos arreglos
    free(a_m);
    free(a_c);

       // Variante: malloc(0)
    void *p0 = malloc(0);
    printf("malloc(0) devuelve: %p\n", p0);
    free(p0);

    return 0;
}