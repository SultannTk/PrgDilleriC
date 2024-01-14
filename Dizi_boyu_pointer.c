#include <stdio.h>
#include <stdlib.h>

int main()
{
   char dizi[100];
   char *pointer;

   printf("Lutfen bir karakter dizisi girin\n");
   gets(dizi);

   for(pointer=dizi;*pointer;pointer++)
   {

   }
   printf("Dizimiz %s %d kadar karakterden olusmaktadir.",dizi,pointer-dizi);
}
