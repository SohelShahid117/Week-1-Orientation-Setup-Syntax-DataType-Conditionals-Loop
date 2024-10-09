#include<stdio.h>
int main(){

    printf("hello world\n");
    int x;
    x=5;
    printf("initialize value=%d\n",x);
    printf("during post increment value is=%d\n",x++);
    printf("after post increment, value is=%d\n",x);

    int a = 10;
    int x1 = a++;
    printf("x1=%d\n",x1);
    --x1;
    printf("a=%d\n",a);
    a--;
    printf("a=%d\n",a);
    int y = --x1;
    printf("y=%d\n",y);
    printf("y=%d\n",y--);

    int x2 = 5;
    int y2=2;
    // double result =x2/y2;
    double result =x2/(y2*1.0);
    printf("result = %lf\n",result);
    printf("result = %d\n",x2/y2);

    int m=1000000;
    int n = 1000000;
    // long long n = 1000000;
    // int mul = m*n;
    // long long mul = m*n;
    // long long mul = m*n*1LL;
    long long mul = m*(n*1LL);
    // printf("%d\n",mul);
    // printf("mul=%ll\n",mul);
    printf("mul=%lld\n",mul);



    return 0;
}