#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i,min,max;
    int *ptr;
    int dizi[N];
    printf("%d kadar deger giriniz",N);
    for(ptr=dizi;ptr<dizi+N;ptr++)
    {
        scanf("%d",ptr);
    }

max=min=dizi[0];
    for(ptr=dizi+1;ptr<dizi+N;ptr++)
    {
        if(*ptr>max)
        {
            max=*ptr;
        }
        if(*ptr<min)
        {
            min=*ptr;
        }
    }
    printf("Dizimizin maksimum degeri: %d\n",max);
    printf("Dizimizin minumum degeri : %d\n",min);

    return 0;
}
