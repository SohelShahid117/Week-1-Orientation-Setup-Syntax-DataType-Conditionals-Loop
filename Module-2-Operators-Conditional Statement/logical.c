#include <stdio.h>
#include <stdbool.h>
int main()
{

    // bool result = (2 > 5) || (2 > 1);
    // bool result = (2 > 5) && (2 > 1);
    // bool result = (2 > 5) && (2 > 1);
    // printf("result is : %d\n", !result);
    bool result = !((2 > 5) && (2 > 1));
    printf("result is : %d\n", result);

    // int price = 60;
    int price = 40;
    if (price <= 50)
    {
        printf("buy 4 eggs\n");
        printf("Taka back %d Taka\n", 50 - price);
    }
    else
    {
        printf("buy 2 eggs\n");
    }

    int a = 12;
    if (a < 5)
    {
        printf("a=%d is less than 5\n", a);
    }
    else if (a < 10)
    {
        printf("a=%d is less than 10\n", a);
    }
    else if (a < 15)
    {
        printf("a=%d is less than 15\n", a);
    }
    else if (a < 20)
    {
        printf("a=%d is less than 20\n", a);
    }
    else
    {
        printf("a=%d is greater than or equal 20\n", a);
    }

    return 0;
}