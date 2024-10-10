#include<stdio.h>
int main(){
    int N;
    printf("Give a number:");
    scanf("%d",&N);

    if(N<=1){
        printf("%d\n",-1);
        printf("your given number is less than 2\n");
    }else{
        for(int i=1;i<=N;i++){
            if(i%2==0){
                printf("%d\n",i);
            }
        }
    }

//   int count = 0;

/*
   for(int i=1;i<=N;i++){
            if(i%2==0){
                // count++;
                printf("%d\n",i);
            }
    }
*/
/*
    if(count==0){
        printf("%d\n",-1);
        printf("your given number is less than 2\n");
    }
*/

    return 0;
}