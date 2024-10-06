#include <stdio.h>
#include <stdbool.h>
int main()
{
    // int tourDays = 1;
    // int tourDays = 3;
    // int tourDays = 4;
    int tourDays = 2;
    if (tourDays == 2)
    {
        // bool isBoatAvailable = true;
        bool isBoatAvailable = false;
        if (isBoatAvailable)
        {
            printf("go to tanguar haour\n");
        }
        else
        {
            printf("go to srimangal\n");
        }
    }
    else if (tourDays >= 4)
    {
        // bool isShipAvailable = true;
        bool isShipAvailable = false;
        if (isShipAvailable)
        {
            printf("go to saintmartin\n");
        }
        else
        {
            printf("go to coxsBazar\n");
        }
    }
    else
    {
        printf("enjoy kaptai lake\n");
    }

    return 0;
}