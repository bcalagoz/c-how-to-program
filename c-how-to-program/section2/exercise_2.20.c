/*
2.20 (Converting from seconds to hours, minutes and seconds) 
Write a program that asks the user to enter the total time elapsed,
in seconds, since an event and converts the time to hours, 
minutes and seconds. The time should be displayed as hours:minutes:seconds. 
[Hint: Use the remainder operator]
*/

#include<stdio.h>
int main(){

    int t; //in type second

    printf("Enter the time(seconds):");
    scanf("%d",&t);

    int h = t/3600;
    int m = (t%3600)/60;
    int s = (t%3600)%60;

    printf("%dh:%dm:%ds",h,m,s);








    return 0;
}