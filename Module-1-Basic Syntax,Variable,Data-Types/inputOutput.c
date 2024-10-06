#include<stdio.h>
int main(){
  //start from-->1.6 - How to take Input and Show Output
    printf("hello world\n");

    int a;
    printf("a==\n");
    scanf("%d",&a);
    printf("a=%d\n",a);

    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("x=%d y=%04d z=%d\n",x,y,z);
    //y=%04d er karon holo y er value 4 digit porjonto hobe

    char ch;
    // printf("ch=\n");
    printf("ch=");
    // getchar();
    // scanf("%c",&ch);
    scanf("\n%c",&ch);
    printf("ch=%c\n",ch);


    float f;
    printf("enter a floating number :\n");
    scanf("%f",&f);
    printf("f=%f\n",f);
    printf("f=%.3f\n",f);



    return 0;
}

/*format specifier

short int-->%hd
int-------->%d
long int--->%ld
long long int-->%lld

char------->%c
float------>%f
double----->%lf
long double->%Lf

unsigned int--->%u
unsigned short--->%hu
unsigned long int--->%lu
unsigned long long int--->%llu
*/