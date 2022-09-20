/*2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains 
them from the user and prints their sum, product, difference, quotient and remainder.*/
#include<stdio.h>

int main(void){

    int num1;
    int num2;
    

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;


    printf("The sum is %d\n",sum);
    printf("The product is %d\n",product);
    printf("The difference is %d\n",difference);
    printf("The quotient is %d\n",quotient);
    printf("The remainder is %d\n",remainder);


    return 0;
}