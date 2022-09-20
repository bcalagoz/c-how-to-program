/*
2.30 (Separating Digits in an Integer) 
Write a program that inputs one five-digit number, 
separates the number into its individual digits and 
prints the digits separated from one another by three spaces each. 
[Hint: Use combinations of integer division and the remainder operation.] 
For exam- ple, if the user types in 42139, the program should print
*/

#include<stdio.h>

int main(){

    int a;
    printf("Enter one five-digit number:");
    scanf("%d",&a);

    int b = a/10000;
    int c = (a%10000)/1000;
    int d = ((a%10000)%1000)/100;
    int e = (((a%10000)%1000)%100)/10;
    int f = ((((a%10000)%1000)%100)%10)/1;


    printf("%d   %d   %d   %d   %d\n",b,c,d,e,f);


    return 0;
}