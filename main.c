#include <string.h>
#include <stdio.h>

void main()
{
 char nombres[5][40];
 
 printf("Introduzca los nombres: \n");
 
 for (int i = 0; i < 5; i++) {
     scanf("%s", nombres[i] );
 }
 int longitud = 40;
 int pos;
 for (int i = 0; i < 5; i++) {
     if(longitud > strlen(nombres[i])){
          longitud = strlen(nombres[i]);
          pos = i;
     }
     printf("%i\n", strlen(nombres[i]));
 }
 
 printf("El nombre de menor dimensiones %s con %i caracteres",nombres[pos], longitud );
}

