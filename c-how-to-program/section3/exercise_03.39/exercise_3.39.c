/*
3.39 (Checkerboard Pattern of Asterisks) Write a program that displays the following checker- board pattern:
*/

#include<stdio.h>

int main(){

    int i = 1;
    int k = 1;

    while (i <= 8)
    {
        k = 1;
        while (k <= 8)
        {
            if (i % 2 != 0)
            {
                printf( "%s", "* " );
            } 

            printf( "%s", " " );
            
            if (i % 2 == 0)
            {
                
                printf( "%s", "* " );
            }
            
            k++;
        }
        puts( "" );
        
        i++;
    }
    

    return 0;
}