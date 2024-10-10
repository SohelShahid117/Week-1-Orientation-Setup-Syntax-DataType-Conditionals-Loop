#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("hello\n");
    int X,Y,Z,total;
    scanf("%d %d %d",&X,&Y,&Z);

    if(X>=0 && Y>=0 && Z>=0 && X<=1000 && Y<=1000 && Z<=1000){
    total=X+Y+Z;
    }
    printf("%d\n",total);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

/*
Abul, Babul, and Bablu are three friends. This year Abul got X taka salami, Babul got Y taka salami and Bablu got Z taka salami.
Now the want to know what is the total amount of salami they all got this year.
Can you help them?

Input Format
Input will contain three integers X, Y, Z.

Constraints
0 <= X, Y, Z <= 1000

Output Format
Print a single integer, the total amount of salami they got.
Sample Input 0
10 25 20

Sample Output 0
55
*/