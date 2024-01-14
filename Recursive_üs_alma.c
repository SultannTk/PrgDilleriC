#include <stdio.h>
#include <stdlib.h>
int usss(int us,int taban)
{
    int sonuc;
    if(us==0)
    {
        sonuc=1;
    }
    else
    {
        sonuc=taban*usss(us-1,taban);
    }
    return sonuc;

}




int main()
{
   /* Taban ve us degerleri klavyeden girilmek uzere a^b ifadesinin hesaplatilmasini saglayan
    C programinin recursive fonksiyon yardimiylala yazilmasi */
    int us,taban;
    printf("Lutfen taban degerini giriniz");
    scanf("%d",&taban);
    printf("Lutfen us degerini giriniz");
    scanf("%d",&us);
    printf("%d ussu %d =%d",taban,us,usss(us,taban));


    return 0;
}
