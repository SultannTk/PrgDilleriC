// iki basamakli aralarinda asal sayilari bul

#include <stdio.h>

// ebob
int gcd(int num1, int num2)
{
    int sNumber; int gcd;
    sNumber = (num1 > num2) ? num2 : num1;
    for (int i = 1; i <= sNumber ; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    for(int i = 10; i < 100; i++)
    {
        for (int j = 10; j < 100; j++)
        {
            if (gcd(i, j) == 1)
                if (i <= j)
                    printf("%d, %d\n", i, j);
        }
    }
    return 0;
}
