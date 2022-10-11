/*
3.36 (Armstrong Numbers) Armstrong numbers are numbers that are equal to the 
sum of their dig- its raised to power of the number of digits in them. 
The number 153, for example, equals 13 + 53 + 33 . Thus it is an Armstrong number.
Write a program to display all three-digit Armstrong numbers.
*/

#include<stdio.h>

int main(){

    int digit,temp,total;
    int num = 100;
    

    while ( num <= 999 )
    {
        
        total = 0;
        temp = num ;

        while ( temp != 0 )
        {
            
            digit = temp % 10;
            total = total + ( digit * digit * digit ); 
            temp = temp / 10 ;
        }
        

        if ( num == total)
        {
        printf("%d is an Armstrong Number.\n",num);
        }

        num++;
    }


    return 0;
}