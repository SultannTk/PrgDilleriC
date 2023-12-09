// girilen 5 notun ortalamasý, en büyüðü ve en küçüðü
// ayný zamanda quiz sorusu
#include <stdio.h>
int main()
{
    int notlar[5];
    float toplam;
    for (int i = 0; i < 5; i++)
    {
        printf("%d. not: ", i + 1);
        scanf("%d", &notlar[i]);
        toplam += notlar[i];
    }
    int min = notlar[0], max = notlar[0];
    for (int i = 1; i < 5; i++)
    {
        if (notlar[i] > max)
            max = notlar[i];
        else if (notlar[i] < min)
            min = notlar[i];
    }
    printf("Ortalama: %0.2f, max: %d, min: %d\n", toplam / 5, max, min);
    return 0;
}
