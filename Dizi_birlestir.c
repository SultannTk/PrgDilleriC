#include <stdio.h>
#include <stdlib.h>

void birlestir(int A[],int B[],int C[],int N,int K)
{
    int i,j,sayac=0;
    for(i=0;i<N;i++)
    {
        C[sayac]=A[i];
        sayac++;
    }
    for(j=0;j<K;j++)
    {
        C[sayac]=B[j];
        sayac++;
    }


}

int main()
{
   /* Kullan�c� taraf�ndan girilen A ve B dizilerine s�ras�yla N ve K adet tamsay� girilmektedir.
    Bu iki dizinin birle�tirilerek tek bir dizi haline getirilmesini sa�layan C program�n�
    a�a��daki fonksiyon prototipini kullanarak yaz�n�z

    void birlestir(int A[],int B[],int C[],int N,int K)*/
    int K,N,i;
    printf("Ilk dizinin eleman sayisini giriniz\n");
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        printf("%d.inci sayi",i+1);
        scanf("%d",&A[i]);
    }

    printf("Ikinci dizinin elaman sayisini giriniz\n ");
    scanf("%d",&K);
    int B[K];
    for(i=0;i<K;i++)
    {
        printf("%d.inci sayi",i+1);
        scanf("%d",&B[i]);
    }
    int birlesik[N*K];
    birlestir(A,B,birlesik,N,K);
    for(i=0;i<N+K;i++)
    {
        printf("%3d",birlesik[i]);
    }
    return 0;
}
