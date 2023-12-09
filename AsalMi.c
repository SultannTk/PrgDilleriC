
// girilen sayi asal mi (math.h kullanmadan uzun algoritma ile)

#include <stdio.h>

int main()
{
    int num, asal = 1;
    printf("Bir sayi girin:\n");
    scanf("%d", &num);

    if (num < 2)
        asal = 0;
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                asal = 0;
                break;
            }
        }
    }
    if(asal)
        printf("\nSayi asal");
    else
        printf("\nSayi asal degil");
    return 0;
}
