#include <stdio.h>
int main(){
    
    int datos[10];
    for(int i=0;i<10;i++){
      scanf("%d",&datos[i]);  
    }
    for(int j=0;j<10;j++){
        printf("%d\n",datos[j]);
    }
    return 0;
}