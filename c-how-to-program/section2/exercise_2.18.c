/*2.18 (Comparing Values) Write a program that asks the user to enter 
the highest rainfall ever in one season for a country, 
and the rainfall in the current year for that country, 
obtains the values from the user, checks if the current rainfall exceed the highest rainfall 
and prints an appropriate message on the screen. If the current rainfall is higher, 
it assigns that value as the highest rainfall ever. 
Use only the single-selection form of the if statement you learned in this chapter.*/

#include<stdio.h>

int main(void){

    float a; //highest rainfall ever in one season for a country
    float b; //the rainfall in the current year for that country

    printf("Enter the highest rainfall ever in one season:");
    scanf("%f",&a);

    printf("Enter the rainfall in the current year:");
    scanf("%f",&b);

    if (b>a)
    {
        printf("The current rainfall exceed the highest rainfall.\n");
        
        a = b;
        
        printf("the new highest rainfall is %.2f",a);

    }
    
    



    return 0;
}