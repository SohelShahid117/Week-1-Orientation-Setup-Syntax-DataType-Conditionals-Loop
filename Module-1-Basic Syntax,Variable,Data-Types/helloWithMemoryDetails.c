#include<stdio.h>
//#include<math.h>
//#include<abcd.h>
//above is linking or preprocessing section

#define ll long long;
#define PI 3.1416;
//above is definition section

int N = 100;
int sum(int x, int y){return x + y;};
//this is global declaration section

int main(){
    //1.5 - Data Type And Variables

    printf("hello world\n");
    printf("enjoy programming\n");
    printf("%d\n",N);
    int s = sum(44,55);
    int s2 = sum(4,55);
    printf("%d\n",s);
    printf("%d\n",s2);

    int number;
    float nmbr;
    char a,b,c;
    number = 22;
    nmbr = 1.55;
    a ='A';
    printf("%c is a charecter\n",a);
    printf("%d\n",number);
   // printf("%lf\n",number);
    printf("%lf\n",nmbr);

    /*datatype vvi--coz data type bole dile variable t RAM teke koto byte memory dokol korbe ta fixed hoya jai.joto kom memory dokol korbe totoi program fast cholbe.
    */
   //keyword kokono vaiable hobe na

   /*
   int----->4 byte      (%d)
   float--->4 byte      (%f)
   double-->8 byte      (%lf)
   long double-->16 byte      (%Lf)
   char---->1 byte      (%c)
   bool---->1 bit

   short int----------->2 byte  (%hd)
   unsigned short int-->2 byte  (%hu)
   unsigned int-------->4 byte  (%u)
   long int ----------->4 byte  (%ld)
   unsigned long int--->4 byte  (%lu)
   long long int------->8 byte  (%lld)
   unsigned long long int----->8 byte(%llu)

   signed char--->1 byte   (%c)
   unsigned char->1 byte   (%c)
   */
  //keyboard er protita key ak akta charactar
  //charecter hobe ' ' single quote er bitor 
  //r string hobe " " double quote er bitor

  //start from-->1.6 - How to take Input and Show Output


    return 0;
} 