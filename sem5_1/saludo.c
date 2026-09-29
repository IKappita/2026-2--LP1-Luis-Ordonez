#include<stdio.h>

//Definicion de la funcion llamada salludar()
//Parametros : NINGUNO
//Salida     : NINGUNA(void)
int devolver_anio_actual(){
return 2026;
}
void saludar(){
    
    printf("Bienvenidas a SW303 en este anio %d \n",devolver_anio_actual());

}
//funcion principal (main), aqui comienza todo
int main(){
    // llamada o uso de la funcion
     saludar(); //toda funcion que se use, debe estar declarada y/o definida

     return 0;
}
