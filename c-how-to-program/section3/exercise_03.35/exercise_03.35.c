/*
Printing the Decimal Equivalent of a Binary Number) Input an integer (5 digits or fewer) 
containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. 
[Hint: Use the re- mainder and division operators to pick off the “binary” number’s digits 
one at a time from right to left. Just as in the decimal number system, in which the rightmost 
digit has a positional value of 1, and the next digit left has a positional value of 10, then 100, then 1000, 
and so on, in the binary number sys- tem the rightmost digit has a positional value of 1, 
the next digit left has a positional value of 2, then 4,then8,andsoon.
Thusthedecimalnumber234canbeinterpretedas4*1+3*10+ 2*100.
*/

#include<stdio.h>

int main(){

    int num;
    int i = 1;
    int total = 0;

    printf("Enter a number(containing only 0s and 1s):");
    scanf("%d",&num);

    while ( num != 0 )
    {
        int digit = num % 10;
        total = total + (digit * i);
        i = 2 * i;
        num /= 10;
    }
    
    printf("Total : %d\n",total);

    return 0;
}