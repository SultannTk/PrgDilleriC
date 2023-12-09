#include <stdio.h>

void VKE(float kilo, float boy)
{
    float vke = kilo / (boy * boy);
    printf("%f", vke);
    if (vke < 18.4)
    {
        printf("ZAYIF");
    }
    else if (vke > 18.4 && vke < 25)
    {
        printf("NORMAL");
    }
    else if (vke >= 25 && vke < 30)
    {
        printf("FAZLA KILOLU");
    }
    else if (vke > 30)
    {
        printf("OBEZ");
    }
}

int main()
{
    float kilo, boy;
    printf("Kilo: ");
    scanf("%f", &kilo);
    printf("Boy(metre): ");
    scanf("%f", &boy);
    VKE(kilo, boy);
    return 0;
}
