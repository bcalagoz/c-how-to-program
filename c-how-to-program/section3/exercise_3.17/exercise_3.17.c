/*
3.17 (Mortgage Calculator) 
Develop a C program to calculate the interest accrued on a bank cus- tomer's mortgage. 
For each customer, the following facts are available:
a) the account number
b) the mortgage amount
c) the mortgage term
d) the interest rate
The program should input each fact, 
calculate the total interest payable ( = mortgage amount × interest rate × mortgage term),
and add it to the mortgage amount to get the total amount payable. It should calculate 
the required monthly payment by dividing the total amount payable by the 
number of months in the mortgage term. The program should display the required 
monthly pay- ment rounded off to the nearest dollar. 
The program should process each customer's account at a time. 
*/

#include<stdio.h>

int main(){

    int accountNum,mortgageAmount,term;
    float rate,montly,totalInterestPayable;
    accountNum = 0;

    
    printf("Enter account number (-1 to end):");
    scanf("%d",&accountNum);

    while (accountNum != -1)
    {
        
        printf("Enter mortgage amount (in dollars):");
        scanf("%d",&mortgageAmount);
        printf("Enter mortgage term (in years):");
        scanf("%d",&term);
        printf("Enter interest rate (as a decimal):");
        scanf("%f",&rate);

        totalInterestPayable = mortgageAmount * rate * term ;
        mortgageAmount += totalInterestPayable;
        montly = mortgageAmount / (term * 12);

        printf("The monthly payable interest $%.2f\n\n",montly);
        
        printf("Enter account number (-1 to end):");
        scanf("%d",&accountNum);
    }

    return 0;
}