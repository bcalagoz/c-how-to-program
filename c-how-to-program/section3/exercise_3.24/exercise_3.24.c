/*
3.24 (Tabular Output) Write a program that uses looping to print the following table of values. 
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
*/

#include<stdio.h>

int main(){

    int i = 1;

    printf("N\tN2\tN3\tN4\n");

    while (i <= 10)
    {
        printf("%d\t%d\t%d\t%d\n",i,(i * i),(i * i * i),(i * i * i * i));

        i++;
    }
    
    return 0;
}