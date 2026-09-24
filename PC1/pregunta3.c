#include <stdio.h>
#include <ctype.h>
int main (){
    int otros=0;
    int vocales=0;
    int consonantes=0;
    int digitos=0;
    int espacios=0;
    int palabras=0;
    int longitud_total=0;
    int longitud_actual, longitud_max;
    int c=getchar();
    
    while (c!='\n' &&  c!=EOF){    
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){ vocales++; longitud_actual++;};
    if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u' &&c!='\t'){ consonantes++;longitud_actual++;};
    if(c=='1' || c=='2' || c=='3'|| c=='4'|| c=='5'||c=='6' ||c=='7'|| c=='8'|| c=='9'|| c=='0'){digitos++;longitud_actual++;}
        else{otros++;};
    if(c=='\t'){ espacios++; palabras++;
         if(longitud_actual>longitud_max){longitud_max=longitud_actual;}; longitud_actual=0;};
    
    longitud_total++;
};
    if(longitud_total==0){ printf("linea vacia");}   
    else{
    printf("==== REPORTE LEXICO ====\n");
    printf("Longitud Total     : %d\n",longitud_total);
    printf("Vocales            : %d\n",vocales);
    printf("Consonantes        : %d\n",consonantes);
    printf("Digitos            : %d\n",digitos);
    printf("Espacios           : %d\n",espacios);
    printf("Otros              : %d\n",otros);
    printf("Palabras           : %d\n",palabras);
    printf("Palabra mas larga  : %d\n",longitud_max);
    };
    
    return 0;
}