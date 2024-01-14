#include <stdio.h>
#include <stdlib.h>

void sirala(int A[],int boy)
{
    int gecici,i;
    if(boy>0)
    {
        for(i=0;i<boy;i++)
        {
            if(A[i]>A[i+1])
            {
                gecici=A[i+1];
                A[i+1]=A[i];
                A[i]=gecici;
            }
        }

        sirala(A,boy-1);
    }

}






int main()
{
   /* Bilgisayar tarafindan rastgele uretilen N adet tamsayi bir dizide tutulmaktadir.Dizi elemanlarinin
    kucukten buyuðe dogru siralanmasini saglayan C programinin recursive fonksiyon yardimiyla yazilmasi

    */
   int i;
   int n;
   printf("Kac adet sayi uretilecek\n");
   scanf("%d",&n);

   int dizi[n];
   srand(time(0));
   for(i=0;i<n;i++)
   {
       dizi[i]=rand() % 100;
       printf("%d\n",dizi[i]);
   }

   sirala(dizi,n-1);
   printf("\n\n");
   for(i=0;i<n;i++)
   {
       printf("%4d",dizi[i]);
   }

    return 0;
}
