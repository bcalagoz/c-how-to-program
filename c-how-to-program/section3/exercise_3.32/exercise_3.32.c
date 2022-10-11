/*
3.32 (Square of Asterisks) Write a program that reads in the side of a square 
and then prints that square out of asterisks. Your program should work 
for squares of all side sizes between 1 and 20.
*/

#include<stdio.h>

int main(){

    int i = 1;
    int num ;

    printf("Enter number of rows: ");
    scanf("%d", &num);

    while ( i <= num )
    {
        int j = 1;

        while (j <= num )
        {
          printf("*");
          j++;  
        }
        
    printf("\n");  
    i++;

    }
   

    return 0;
}