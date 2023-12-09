// girilen iki sayi arasindaki(girilenler dahil) 5in kati sayilar

#include <stdio.h>

int main()
{
    int n1, n2, ksayi, bsayi;

    printf("1.sayi:\n");
    scanf("%d", &n1);
    printf("2.sayi:\n");
    scanf("%d", &n2);
    printf("\n");

    if (n1 > n2)
    {
        ksayi = n2;
        bsayi = n1;
    }
    else if (n2 > n1)
    {
        ksayi = n1;
        bsayi = n2;
    }
    else
        printf("farkli sayi giriniz");

    int i;
    for (i = ksayi; i <= bsayi; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
