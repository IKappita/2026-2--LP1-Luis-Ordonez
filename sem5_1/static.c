#include <stdio.h>

int contador(){
    static int  c=0; //Inicializacion ocurre solo una vez 
    c++; //El estado persiste y se incrementa
    return c;
}
int main(){
    printf("%d\n",contador()); //imprime 1
    printf("%d\n",contador()); //imprime 2 
    printf("%d\n",contador()); //imprime 3
}