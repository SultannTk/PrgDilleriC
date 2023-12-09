// sonsuz dongu ile iki basamakli asal sayilari bul -CK

#include <stdio.h>
#include <math.h>

// asallik
int isPrime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int i = 10;
    while (1)
    {
        if (i == 100)
            break;
        if (isPrime(i))
            printf("%d ", i);
        i++;
    }
    return 0;
}
