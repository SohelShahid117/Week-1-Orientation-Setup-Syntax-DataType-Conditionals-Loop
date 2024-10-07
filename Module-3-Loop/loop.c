#include<stdio.h>
int main(){

    printf("\nhello world\n");
    printf("1.for loop\n 2.while loop\n 3.do while loop\n 4.nested loop\n 5.infinity loop\n");

    //make a digital clock 17:20:59
    int second = 0;
    int minute = 0;
    int hour = 0;
    for(int i =0;i<=60;i++){
        second = second+i;
        if(second==60){
            minute = minute +1;
            second=0;
        }
        if (minute==60)
        {
            hour=hour+1;
            minute=0;
        }
        if(hour==24){
            hour=0;
        }
        
    }
    printf("%d : %d :%d\n",hour,minute,second);

    for (int i = 3; i > 0; i--)
    {
        /* code */
        printf("%d\n",i);
    }
    printf("Happy birthday to u!!!\n");


    int j=0;
    while(j<5){
        printf("%d\n",j);
        j++;
    }

    int k=5;
    do{
        printf("hello-%d\n",k);
        // k--;
        k++;
    }
    // while(k<0);
    while(k<10);
    

    return 0;
}