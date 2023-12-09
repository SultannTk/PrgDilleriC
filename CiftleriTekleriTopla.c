// istenilen adet sayý giriliyor girilen sayýlar listesi, çiftler toplamý, tekler toplamý

#include <stdio.h>
int main()
{
    int arrayLength;
    printf("Kac sayi?\n");
    scanf("%d", &arrayLength);
    int inputNumbers[arrayLength];
    int evenSum = 0;
    int oddSum = 0;

    printf("Lutfen %d sayi girin\n", arrayLength);
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d. sayi: ", i + 1);
        int number;
        scanf("%d", &number);
        inputNumbers[i] = number;
        if (number % 2 == 0)
            evenSum += number;
        else
            oddSum += number;
    }
    printf("\nGirdiginiz Sayilar:\n");
    for (int i = 0; i < arrayLength; i++)
        printf("%d ", inputNumbers[i]);
    
    printf("\n\nSayilardan cift olanlarin toplami: %d\n", evenSum);
    printf("Sayilardan tek olanlarin toplami: %d\n", oddSum);

    return 0;
}
