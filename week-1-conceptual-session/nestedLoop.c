#include<stdio.h>
int main(){

    for(int i=0;i<5;i++){
        for (int j = 0; j < 3; j++)
        {
            // printf("%d ",j);
            int result = i*j;
            printf("%d ",result);
        }
        printf("\n");
    }
    

     int N;
     printf("Enter the number:");
     scanf("%d",&N);
     for (int j = 1; j <=10; j++)

        {
            // printf("%d ",j);
            // int N=5;
            int result = j*N;
            printf("%d X %d = %d\n",N,j,result);
        }

    for(int m=0;m<5;m++){
        /*
        for(int n=3;n>0;n--){
            printf("* ");
        }
        */
        for(int n=5;n>m;n--){
            printf("* ");
        }
        printf("\n");

    }
    printf("now print increment star\n");
    int k;
     printf("Enter the loop quantity:\n");
    scanf("%d",&k);

       for(int m=0;m<k;m++){
        for(int n=0;n<=m;n++){
            printf("* ");
        }
        printf("\n");
        }

       /*
       for(int m=0;m<k;m++){

        for(int n=0;n<=k-(m-0);n++){
            printf("* ");
        }
        printf("\n");
    }
    */


    //Conceptual Session two [Conditional Statements and Loop]-1:40min done



    return 0;
}