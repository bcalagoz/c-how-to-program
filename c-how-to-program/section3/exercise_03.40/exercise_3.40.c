/*
3.40 (Powers of 3 with an Infinite Loop) Write a program that keeps printing the powers of the integer 3, 
namely 3, 9, 27, 91, 273, and so on. Your loop should not terminate (i.e., you should create an infinite loop). 
What happens when you run this program?
*/

#include<stdio.h>

int main(){

    int i = 1;
    int num = 3;
    int total = 1;

    while ( i != 0)
    {
        total = total * num;
        printf("%d\n",total);
    }
    
    return 0;
}