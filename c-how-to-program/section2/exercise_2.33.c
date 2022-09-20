/*
Create an application that calculates your daily driving cost, 
so that you can estimate how much money could be saved by car pooling, 
which also has other advantages such as reducing carbon emissions 
and reducing traffic congestion. The application should input 
the following information and display the user’s cost per day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.
*/

#include<stdio.h>

int main(){

    int totMile;
    int costGalon;
    int averMile;
    int parkFee;
    int perToll;

    printf("Total miles driven per day:");
    scanf("%d",&totMile);

    printf("Cost per gallon of gasoline:");
    scanf("%d",&costGalon);

    printf("Average miles per gallon:");
    scanf("%d",&averMile);

    printf("Parking fees per day:");
    scanf("%d",&parkFee);

    printf("Tolls per day:");
    scanf("%d",&perToll);

    int total = parkFee + perToll + ((totMile / averMile) * costGalon);

    printf("Total :$%d\n",total);


    return 0;
}