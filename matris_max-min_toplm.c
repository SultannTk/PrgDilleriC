#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

void init_tablo(int mtrs[A][B])
{
   int i,j;
   printf("%d  *  %d boyutunda bir matris giriniz\n",A,B);
   for(i=0;i<A;i++)
   {
       for(j=0;j<B;j++)
       {
           scanf("%d",&mtrs[i][j]);
       }
   }
}
void print_tablo(int mtrs[A][B])
{
    int i,j;
    printf("Tablomuz su sekilde gorunmektedir\n");
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%4d",mtrs[i][j]);
        }
        printf("\n");

    }
}
void calcul (int mtrs[A][B],int *max,int *min,int * toplam)

{
    int i,j;
    *max=mtrs[0][0];
    *min=mtrs[0][0];
    *toplam=0;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(mtrs[i][j]>*max)
            {
                *max=mtrs[i][j];
            }
            if(mtrs[i][j]<*min)
            {
                *min=mtrs[i][j];
            }
            *toplam=*toplam+mtrs[i][j];
        }
    }

}







int main()
{
    int min,max,toplam;
    int can[A][B];
    init_tablo(can);
    print_tablo(can);
    calcul(can,&max,&min,&toplam);
    printf("Maximum degerimiz : %d\n",max);
    printf("Minumum degerimiz : %d\n",min);
    printf("Toplam degerimiz : %d",toplam);


    return 0;
}
