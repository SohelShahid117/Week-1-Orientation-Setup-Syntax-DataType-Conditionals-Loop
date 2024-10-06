#include<stdio.h>
int main(){
    printf("result = %d\n",17/3);
    printf("result =%lf\n",17/3);
    printf("result =%lf\n",17/3.0);
    printf("result =%lf\n",17%3);
    printf("result =%d\n",17%3);


    int a,b;
    scanf("%d %d",&a, &b);
    printf("result=%d\n",a+b);

    int x = 5;
    // x +=10;
    // x /=10;
    // x %=2;
    x *=2;
    printf("%d\n",x);
    printf("%d\n",++x);
    printf("%d\n",x++);
    return 0;
}

//2.4 - Relational Operators

