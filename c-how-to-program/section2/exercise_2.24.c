/*
2.24 (Odd or Even) Write a program that reads 
an integer and determines and prints whether it’s odd or even. 
[Hint: Use the remainder operator. An even number is a multiple of two. 
Any mul- tiple of two leaves a remainder of zero when divided by 2.]
*/

#include<stdio.h>

int main(){

    int num;
    printf("Enter an integer:");
    scanf("%d",&num);

    if (0 == num % 2)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }


    return 0;
}