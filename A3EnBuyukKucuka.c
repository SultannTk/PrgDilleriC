// en buyuk ve en kuck A3 asal sayisi icin A degerleri toplami

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
    int sNumber = 999; int bNumber = 0;
    for (int i = 13; i < 100; i += 10)
    {
        if (isPrime(i))
        {
            bNumber = i;
            if (i < sNumber)
                sNumber = i;
        }
    }
    
    int bigA = (bNumber - 3) / 10;
    int smallA = (sNumber - 3) / 10;
    int sum = bigA + smallA;

    printf("%d + %d = %d", bigA, smallA, sum);
    return 0;
}
