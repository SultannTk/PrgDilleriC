#include <stdio.h>
#include <stdlib.h>



/* Kullan�c�dan dizi eleman say�s�n� belirlemesini isteyin dizinin elemanlar�n� girdikten sonra
pointer yard�m�yla yeni bir diziye ilk dizinin elemanlar�n� kopyalay�p her iki diziyi birden console a bast�r�n�z
 */



int main()
{
    int source_arr[100];
    int dest_arr[100];
    int N;
    int *source_ptr;
    int *dest_ptr;
    int *end_ptr;
    source_ptr=source_arr;
    dest_ptr=dest_arr;



    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    int i;
    for( i=0;i<N;i++)
    {
        scanf("%d",(source_ptr+i));

    }

    end_ptr=&source_arr[N-1];

    printf("Kaynak arrayim kopyalamadan once");
    bastir(source_arr,N);


    while(source_ptr <=end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }

    printf("\nKopyalandiktan sonraki source arrayim : \n");
    bastir(source_arr,N);

    printf("\nKopyalandiktan sonraki destination arrayim : \n");
    bastir(dest_arr,N);

    return 0;
}

void bastir(int source_arr,int N )
{
     printf("Degerlerim:\n");
     int i;
    for(i=0;i<N;i++)
    {
        printf("%d",(source_arr))
       &source_arr++;
    }
}



