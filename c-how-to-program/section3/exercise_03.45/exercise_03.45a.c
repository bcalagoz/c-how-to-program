/*
3.45 (Factorial) 
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
*/

#include<stdio.h>

int main(){

    unsigned int x;
    int total = 1;

    printf("Enter a nonnegative integer:");
    scanf("%u",&x);

    while ( x != 0)
    {
        total = total * x;
        x--;
    }

    printf("%u factorial is %d",x,total);
    
    return 0;
}