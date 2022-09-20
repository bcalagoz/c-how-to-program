/*
2.26 (Multiples) Write a program that reads in two integers 
and determines and prints whether the first is a multiple of the second. 
[Hint: Use the remainder operator.]
*/

#include<stdio.h>

int main(){

    int a,b;
     
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);

    if (a%b == 0)
    {
        printf("The first is a multiple of the second.\n");
    }
    else{
        printf("The first is not a multiple of the second.\n");
    }
    

    return 0;
}