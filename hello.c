/* Escribir por pantalla Hello World!
* Ibarra Maximiliano
* 20170319
*/
#include <stdio.h>
int main(void){

  char mensaje[15]="Hola Mundo!";
  FILE *arch;

  arch = fopen ("salida.txt","w");


   printf("%s",mensaje);
   fprintf(arch,"%s",mensaje);

}
