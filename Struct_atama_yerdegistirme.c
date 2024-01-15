#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   
    struct ogrenci_bilgi{
    int no;
    char ad[10];
    char soyad[20];
    int yas;
    };

    struct ogrenci_bilgi ogrenci_1,ogrenci_2;
    ogrenci_1.no=354;
    strcpy(ogrenci_1.ad,"Sultan");
    strcpy(ogrenci_1.soyad,"Tekercioglu");
    ogrenci_1.yas=20;

    ogrenci_2=ogrenci_1;
    
    printf("Ogrencinin adi: %s\n Soyadi:  %s\n Numarasi: %d \nYasi: %d\n",ogrenci_2.ad,ogrenci_2.soyad,ogrenci_2.no,ogrenci_2.yas);
    
    
    return 0;
}
