#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANTIDADTEXTO 80

//Prototipo de las funciones

//Variables globales
int i;

int main()
{
    char texto[CANTIDADTEXTO];
    char vacio[CANTIDADTEXTO];
    int c = 0, d = 0;
    printf("Ingrese el texto deseado: "); gets(texto);
       while(texto[c] != '\0')
       {
           if(!(texto[c] == ' ' && texto[c+1] == ' '))
           {
               vacio[d] = texto[c];
               d++;
           }
           c++;
       }
    vacio[d] = '\0';

    printf("\n\nTexto arreglado: ");
    puts(vacio);

    return 0;
}
//funciones desarrolladas
