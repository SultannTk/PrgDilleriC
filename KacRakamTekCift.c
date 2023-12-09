// girilen bir sayýnýn rakamlarýnýn kac tanesi tek kac tanesi cift

#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int evenCount = 0;
    int oddCount = 0;
    printf("Sayi: ");
    scanf("%d", &num);
    int basSay = 0;
    while (num >= pow(10, basSay)) basSay++;
    int temp1;
    for (int i = 0; i < basSay; i++)
    {
        temp1 = num / pow(10, i);
        if (temp1 % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("cift: %d, tek: %d\n", evenCount, oddCount);
    return 0;
}
