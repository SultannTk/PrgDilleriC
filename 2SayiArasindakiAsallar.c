// girilen 2 sayi arasindaki(sayilar dahil) asal sayilar

#include <stdio.h>

int main()
{

    // degiskenleri ata, sayi1 ve sayi2yi al

    int sayi1, sayi2, ksayi, bsayi, i, n, asal;
    printf("sayi1 giriniz:\n");
    scanf("%d", &sayi1);
    printf("sayi2 giriniz:\n");
    scanf("%d", &sayi2);

    // buyuk ve kucuk sayiyi belirle (esitse hata ver)

    if (sayi1 > sayi2)
    {
        bsayi = sayi1;
        ksayi = sayi2;
    }
    else if (sayi2 > sayi1)
    {
        bsayi = sayi2;
        ksayi = sayi1;
    }
    else
        printf("farkli degerler giriniz");

    // for loopu ile sayi araligindaki asal sayilari bul ve yaz

    for (i = ksayi; i <= bsayi; i++)
    {
        asal = 1;
        if (i < 2)
            asal = 0;
        else
        {
            for (n = 2; n < i; n++)
            {
                if (i % n == 0)
                {
                    asal = 0;
                    break;
                }
            }
        }
        if (asal)
            printf("%d ", i);
    }

    return 0;
}
