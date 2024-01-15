#include <stdio.h>
#include <stdlib.h>

 typedef struct
{
    char isim[10];
    float x_ekseni;
    float y_ekseni;
}nokta;

    void ekranayazdir(nokta p[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("%s = (%.2f,%.2f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
        }

    }

int main()
{
    nokta ST[5]={{"X",4,4},{"Y",5,3},{"Z",2,5},{"T",8,3},{"N",10,2}};
    ekranayazdir(ST,5);

    return 0;
}
