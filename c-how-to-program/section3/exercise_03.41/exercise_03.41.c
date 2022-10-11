/*
3.41 (Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of 
a circle (as a float value) and computes and prints the diameter, 
the circumference and the area. Use the value 3.14159 for π.
*/

#include<stdio.h>
#define PI 3.14159

int main(){

    float radius,diameter,circumference,area;

    printf("Enter Radius:");
    scanf("%f",&radius);

    diameter = radius * 2;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter : %.2f\n",diameter);
    printf("Circumference : %.2f\n",circumference);
    printf("Area : %.2f\n",area);



    return 0;
}