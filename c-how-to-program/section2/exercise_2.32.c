/*
Create a BMI calculator application that reads the user’s 
weight in pounds and height in inches (or, if you prefer, 
the user’s weight in kilograms and height in meters), then calculates 
and displays the user’s body mass index. Also, the application should 
display the following information from the Department of Health and 
Human Services/National Institutes of Health so the user can evaluate his/her BMI
*/
/*
    BMI VALUES
    Underweight: less than 18.5 
    Normal: between 18.5 and 24.9 
    Overweight: between 25 and 29.9 
    Obese: 30 or greater
    */
#include<stdio.h>

int main(){

    double w,h;

    printf("Enter your weight(kg):");
    scanf("%lf",&w);

    printf("Enter your height(m):");
    scanf("%lf",&h);

    double BMI = w / (h * h);

    printf("Your BMI is %.1lf\n",BMI);

   if (BMI<18.5)
   {
    printf("Underweight\n");
   }
   else if (18.5<BMI && BMI<=24.9)
   {
    printf("Normal\n");
   }
   else if (25<=BMI && BMI<=29.9)
   {
    printf("Overweight\n");
   }
   else if (30<=BMI)
   {
    printf("Obese\n");
   }
   
    return 0;
}