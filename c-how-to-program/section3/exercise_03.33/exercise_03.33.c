/*
3.33 (Hollow Square of Asterisks) Modify the program you wrote
in Exercise 3.32 so that it prints a hollow square. 
*/

#include<stdio.h>

int main(){

    int i , j , num;
    
    i = 1;
    

    printf("Enter number of rows:");
    scanf("%d",&num);

    while ( i <= num )
    {
        j = 1;
        while ( j <= num)
        {
            if ( i == 1 || i == num || j == 1 || j == num)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            j++;
        }
        printf("\n");
        i++;
    }
    

    return 0;
}