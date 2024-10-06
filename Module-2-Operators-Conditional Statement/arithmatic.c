#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("result = %d\n", 17 / 3);
    printf("result =%lf\n", 17 / 3);
    printf("result =%lf\n", 17 / 3.0);
    printf("result =%lf\n", 17 % 3);
    printf("result =%d\n", 17 % 3);

    int a, b;
    scanf("%d %d", &a, &b);
    printf("result=%d\n", a + b);

    int x = 5;
    // x +=10;
    // x /=10;
    // x %=2;
    x *= 2;
    printf("%d\n", x);
    printf("%d\n", ++x);
    printf("%d\n", x++);

    int p = 15;
    int q = 5;

    bool isEqual = p == q;
    bool value = p >= q;
    printf("bool:%d\n", isEqual);
    printf("bool:%d\n", value);

    return 0;
}

// 2.4 - Relational Operators
