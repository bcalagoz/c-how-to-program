/*

3.34 (Floyd's Triangle) Floyd’s Triangle is a right-angled triangular array of natural numbers. 
It is defined by filling rows with consecutive integers. Thus, row 1 will have the number 1, 
row 2 will have the numbers 2 and 3, and so on. Write a program that draws a 10-line Floyd’s triangle. 
An outer loop can control the number of lines to be printed and an inner 
loop can ensure that each row contains the correct number of integers.
*/

#include<stdio.h>

int main(){

    int i,j,k;  

    i = 1;
    k = 1;

    while ( i <= 10 )
    {
        j = 1;
        while ( j <= i )
        {
            
            printf("%2d ",k);
            k++;
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}