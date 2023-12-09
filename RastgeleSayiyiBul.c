#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    int randNum = rand() % 100 + 1;

    bool numFound = false;
    do
    {
        int userGuess;
        printf("Tahmininiz: \n");
        scanf("%d", &userGuess);
        if (userGuess > randNum)
            printf("daha kucuk\n");
        else if (userGuess < randNum)
            printf("daha buyuk\n");
        else
            numFound = true;
    } while (!numFound);
    printf("Tebrikler! Sayi %d idi.\n", randNum);
    return 0;
}
