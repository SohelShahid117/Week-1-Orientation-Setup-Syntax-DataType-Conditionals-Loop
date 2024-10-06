#include <stdio.h>
int main()
{

    int day = 5;
    printf("before switch case\n");
    switch (day)
    {
    case 1:
        printf("today day-%d-is Saturday\n", day);
        break;
    case 2:
        printf("today day-%d-is Sunday\n", day);
        break;
    case 3:
        printf("today day-%d-is Monnday\n", day);
        break;
    case 4:
        printf("today day-%d-is Tuesday\n", day);
        break;
    case 5:
        printf("today day-%d-is Wednesday\n", day);
        break;
    case 6:
        printf("today day-%d-is Thursday\n", day);
        break;
    case 7:
        printf("today day-%d-is Friday\n", day);
        break;
    default:
        printf("%d is wrong day!!!Day should be 1-7\n", day);
        // break;
        // default eta last howai r kono break likhte hoina
    }
    printf("after switch case\n");

    double a = 15 / 4;
    printf("%lf\n", a);

    int b = 5;
    b--;
    printf("%d\n", --b);

    int a1 = 10;
    int x1 = a1++;
    --x1;          // 9
    a1--;          // 10
    int y1 = --x1; // 8
    printf("%d\n", y1--);

    int x2 = 5;
    if (x2 < 10)
    {
        printf("hello ");
    }
    if (x2 == 5)
    {
        printf("hi");
    }
    else
    {
        printf("no");
    }

    return 0;
}

// done module-2-operators & conditinal statements