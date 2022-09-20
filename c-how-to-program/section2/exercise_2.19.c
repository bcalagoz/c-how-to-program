/*
2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three 
different integers from the keyboard, then prints the sum, the average, the product, 
the smallest and the larg- est of these numbers. Use only the single-selection form of the 
if statement you learned in this chap- ter. The screen dialogue should appear as follows:
*/

#include<stdio.h>

int main(void){

    float num1,num2,num3;

    printf("Enter three numbers:");
    scanf("%f %f %f",&num1,&num2,&num3);

    float sum = num1+num2+num3;
    printf("The sum is %.2f\n",sum);

    float average = sum / 3;
    printf("The average is %.2f\n",average);

    float product = num1*num2*num3;
    printf("The product is %.2f\n",product);

    if (num1>num2 && num1>num3)
    {
        printf("The largest number is %.2f\n",num1);
    }
    else if (num2>num3)
    {
        printf("The largest number is %.2f\n",num2);
    }
    else{
        printf("The largest number is %.2f\n",num3);
    }
    
    
    if (num1<num2 && num1<num3)
    {
        printf("The smallest number is %.2f\n",num1);
    }
    else if (num2<num3)
    {
         printf("The smallest number is %.2f\n",num2);
    }
    else{
         printf("The smallest number is %.2f\n",num3);
    }
     

    return 0;
}