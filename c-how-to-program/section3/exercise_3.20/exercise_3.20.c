/*
3.20 (Salary Calculator) Develop a program that will determine the gross pay for each of several employees. 
The company pays “straight time” for the first 40 hours worked by each employee 
and pays “time-and-a-half” for all hours worked in excess of 40 hours. 
You’re given a list of the employ- ees of the company, 
the number of hours each employee worked last week and the hourly rate of each employee. 
Your program should input this information for each employee and should deter- mine and display the employee's gross pay.
*/

#include<stdio.h>

int main(){

    int hours;
    float rate , salary = 0;

    printf("Enter # of hours worked (-1 to end):");
    scanf("%d",&hours);

    while (hours != -1)
    {
        printf("Enter hourly rate of the worker ($00.00):");
        scanf("%f",&rate);

        if (hours < 40)
        {
            salary = hours * 10.00;
            printf("Salary is $%.2f\n\n",salary);
        }
        else if (hours > 40)
        {
            salary = 400 + ((hours % 40) * 15.00);
            printf("Salary is $%.2f\n\n",salary);
        }
        else
        {
            salary = 400; 
            printf("Salary is $%.2f\n\n",salary);
        }
        
        printf("Enter # of hours worked (-1 to end):");
        scanf("%d",&hours);
    }
    
    return 0;
}