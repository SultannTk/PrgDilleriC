#include <stdio.h>
int main()
{
    int sayi1, sayi2; int err = 0;
    float sonuc;
    char islem;
    printf("Bir islem girin:\n");
    scanf("%d %c %d", &sayi1, &islem, &sayi2);
    switch (islem)
    {
    case '+':
        sonuc = sayi1 + sayi2;
        break;
    case '-':
        sonuc = sayi1 - sayi2;
        break;
    case '/':
        sonuc = (float)sayi1 / sayi2;
        break;
    case '*':
        sonuc = sayi1 * sayi2;
        break;
    default:
        printf("hata");
        err = 1;
        break;
    }
    if (!err)
        printf("%f\n", sonuc);
    return 0;
}
