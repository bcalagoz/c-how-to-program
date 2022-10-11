/*
3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, 
find the two largest values of the 10 numbers. 
*/

#include<stdio.h>

int main(){

    unsigned int counter = 1;
    int num,largest1 = 0,largest2 = 0;

    while (counter <= 10)
    {
        printf("Enter Num:");
        scanf("%u",&num);

        if (num >= largest1 && num >= largest2)
        {
            largest2 = largest1;
            largest1 = num;
        }
        else if (num < largest1 & num >= largest2)
        {
            largest2 = num;
        }

        counter++;
    }

    printf("First Largest : %d\tSecond Largest : %d\n",largest1,largest2);

    return 0;
}