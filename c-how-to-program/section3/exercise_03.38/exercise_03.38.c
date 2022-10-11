/*
3.38 (Counting 9s) Write a program that reads an integer (5 digits or fewer) 
and determines and prints how many digits in the integer are 9s.
*/

#include<stdio.h>

int main(){

    int num,digit;
    int i = 0;
    

    printf("Enter a number (5 digits or fewer):");
    scanf("%d",&num);

    while ( num != 0 )
    {
        digit = num % 10 ;
        
        if (digit == 9)
        {
            i++;
        }
        num = num / 10;
        
    }

    printf("There are %d 9s in the integer.\n",i);


    return 0;
}