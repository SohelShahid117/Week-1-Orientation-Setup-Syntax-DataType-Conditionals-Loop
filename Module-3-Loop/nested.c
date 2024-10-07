#include<stdio.h>
int main(){

    //start from -- 3.6 - Nested Loop
    for(int h=0;h<=23;h++){
        for(int m=0;m<=59;m++){
            for(int s=0;s<=59;s++){
                printf("%d : %d :%d\n",h,m,s);
            }
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }




    return 0;
}