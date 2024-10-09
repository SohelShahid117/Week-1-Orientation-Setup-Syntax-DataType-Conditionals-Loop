#include<stdio.h>

int main(){
    //week-1-Conceptual session one [Data-type and variables]

    printf("hello world\n");
    int n = 6;  //initialization
    int a ;     //decalarionn
    a=20;       //assignment

    printf("%d\n",a);
    int x;
    printf("X=");
    scanf("%d",&x);
    printf("output is : %d\n",x);

    
    int p,q;
    printf("p & q value:");
    scanf("%d %d",&p,&q);
    printf("Value of p:%d\nValue of q:%d\n",p,q);


    //what is buffer || buffering in C programming

    char ch;
    printf("enter a charecter:");
    getchar();
    // getchar();  
    /*getchar() only 1t input nibe & sei input t getchar() kheye flebe---ai input t hobe 1t charecter */
    //1 t getchar() only 1t input nibe
    
    scanf("%c",&ch);
    /*scanf() prothome buffer e jabe & dekbe sekane kono kicho(new line,space,charecter,string,number,...) ache kina?jodi take seti scanf() tar memory address e rakbe(as per %c ,%d,%lld,%f,%lf,...) & poroborti printf() e show korbe r jodi na pai ortat buffer blank pai tahole jeti input dibo seti scanf() tar memory address e rakbe & printf() e show korbe */
    
    printf("\ncharecter is :%c\n",ch);

    //Conceptual session one [Data-type and variables]----->1:15 min done

    /*
        int-------------->%d
        float------------>%f
        double----------->%lf
        char------------->%c
        long long int --->%lld
        long int -------->%ld
    */

   getchar();
   char c1,c2;
//    printf("enter the charecter of c1:\n");
   printf("enter the charecter of c1:\n");
   getchar();
   scanf(" %c",&c1);
//    scanf("\n%c",&c1);
   printf("c1=%c",c1);

   

    return 0;
}