



// 1 ve 100 arasýnda 10 tane rastgele sayi ciktisi |ST|

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, sayi;
    for (i = 1; i <= 10; i++)
    {
        sayi = (rand() % 100) + 1;
        printf("%d. sayi: %d\n", i, sayi);
    }
    return 0;
}
