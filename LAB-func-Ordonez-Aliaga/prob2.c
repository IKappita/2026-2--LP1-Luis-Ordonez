#include <stdio.h>
//El problema no actualiza el valor n en su paso por la funcion incrementar debido a que
// n no es la variable que se cambia sino un copia de dicho n
//Para arreglar el codigo cambiamos el tipo de funcion de incrementar( de void a int para que nos devuelva el numero actualizado)
int incrementar (int x){
    x+=1;
    printf("Dentro de incrementar: n= %d\n",x);
    return x;
} 
int main (void){
    int n=10;
    printf("Despues de llamar: n= %d\n",incrementar(n));// 10 u 11?
    return 0;
}
