// en buyuk 3 basamakli asal sayiyi i = 2 && continue kullanarak bul -CK

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
    int lastNumber;
    for (int i = 2; i < 1000; i++)
    {
        if(!isPrime(i))
            continue;
        lastNumber = i;
    }
    printf("%d", lastNumber);
    return 0;
}
