#include <stdio.h>
#include <stdlib.h>

int main() {
    int cap = 2;
    int numelem = 0;
    int nrealloc = 0;
    int num;

    int *arr = calloc(cap, sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    printf("Ingrese enteros (termine con -1):\n");

    while (scanf("%d", &num) == 1 && num != -1) {
        if (numelem == cap) {
            cap *= 2;
            int *tmp = realloc(arr, cap * sizeof(int));
            if (tmp == NULL) {
                free(arr);
                return 1;
            }
            arr = tmp;
            nrealloc++;
        }
        arr[numelem] = num;
        numelem++;
    }

    printf("\nElementos: %d\n", numelem);
    printf("Capacidad final: %d\n", cap);
    printf("Realloc llamados: %d\n", nrealloc);
    printf("Contenido: ");
    for (int i = 0; i < numelem; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}