/*
3.25(Tabular Output) Write a program that utilizes looping to produce the following table of values.
*/

#include<stdio.h>

int main(){

    int a = 7 , i = 1;

    printf("A\tA+3\tA+6\tA+9\n");

    while (i <= 5)
    {
        printf("%d\t%d\t%d\t%d\n",a,a+3,a+6,a+9);
        a += 7;
        i++;
    }

    return 0;
}