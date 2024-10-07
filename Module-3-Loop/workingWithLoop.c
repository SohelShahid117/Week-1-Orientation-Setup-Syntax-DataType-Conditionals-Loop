#include<stdio.h>
int main(){

    printf("hello world\n");
    //3.8- Working with loops

    int n=10;
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    printf("now decrement loop\n");
     for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }

    printf("now print ASCII value for lower case letter:a-z\n");

     for(char x='a';x<='z';x++){
        printf("%d-",x);
        printf("%c\n",x);
    }
    printf("now print ASCII value for upper case letter:A-Z\n");

     for(char x='A';x<='Z';x++){
        printf("%d-",x);
        printf("%c\n",x);
    }
    printf("now enjoy reverse print of ASCII value for upper case letter:Z-A\n");

     for(char x='Z';x>='A';x--){
        printf("%d-",x);
        printf("%c\n",x);
    }

    int sum=0;
    int n1=10;
    for(int i=1;i<=n;i++){
        printf("%d + %d = ",sum,i);
        sum = sum+i;
        printf("%d\n",sum);
    }
    printf("the sum is : %d\n",sum);

    for(int i=1;i<=10;i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }else{
            printf("%d is odd\n",i);
        }
    }



    return 0;
}