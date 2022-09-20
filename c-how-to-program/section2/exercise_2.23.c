/*
2.23 (Largest and Smallest Integers) 
Write a program that reads in three integers 
and then deter- mines and prints the largest and 
the smallest integers in the group. Use only the programming 
techniques you have learned in this chapter.
*/

#include<stdio.h>

int main(){

    int a,b,c;
    
    printf("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b && a<c)
    {
        printf("The smallest is %d\n",a);
    }
    else if (b<c)
    {
        printf("The smallest is %d\n",b);
    }
    else{
         printf("The smallest is %d\n",c);
    }

    if (a>b && a>c)
    {
        printf("The largest is %d\n",a);
    }
    else if (b>c)
    {
        printf("The largest is %d\n",b);
    }
    else{
         printf("The largest is %d\n",c);
    }


    return 0;
}