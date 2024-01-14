#include <stdio.h>
#include <stdlib.h>


int bolum(int bolunen,int bolen)
{

    if(bolen==0)
    {
        return 0;
    }
    else if(bolunen-bolen==0)
    {
        return 1;
    }
    else if(bolunen<bolen)
    {
        return 0;
    }
    else
    {
        return(1+bolum(bolunen-bolen,bolen));

    }
}





int main()
{
   /* Klavyeden girilen iki tamsayininn bolumunu (A/B) bolme sembolu kullanmadan gerceklestiren
    C programinin recursive fonksiyon yardimiyla yazilmasi*/
    int a,b;
    printf("Bolunen sayiyi giriniz\n");
    scanf("%d",&a);
    printf("Lutfen bolen sayiyiyi giriniz");
    scanf("%d",&b);
    printf("Bolum=%d\n",bolum(a,b));
    printf("Kalan =%d",a-(bolum(a,b)*b));
    return 0;
}
