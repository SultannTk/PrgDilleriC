

// sonsuz dongu ile 1-100 arasý cift sayilarin toplamini bul -CK

#include <stdio.h>

int main()
{
    int i = 1; int sum = 0;
    while (1)
    {
        if (i == 100)
            break;
        if (i % 2 == 0)
            sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}
