/*
3.46 (World-Population-Growth Calculator) Use the web to determine the current world population 
and the annual world population growth rate. Write an application that inputs these values, 
then displays the estimated world population after one, two, three, four and five years.
*/

#include<stdio.h>

int main(){

    int year = 1;
    float population;
    float rate;

    printf("Enter Worl Population:");
    scanf("%f",&population);

    printf("Enter World Population Growth Rate (annual):");
    scanf("%f",&rate);

    while ( year <= 5)
    {
        population = population + ( population * rate / 100);
        printf("%d. Year Estimated World Population : %.2f\n",year,population);
        year++;
    }
    
    return 0;
}