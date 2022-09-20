/*2.17 (Final Velocity) Write a program than asks the user to enter the initial velocity and acceleration 
of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity, v, 
and distance traversed, s, using the following equations.*/

#include<stdio.h>

int main(void){

    float u,a,t,v,s;

    printf("Enter the initial velocity:");
    scanf("%f",&u);

    printf("Enter acceleration of an object:");
    scanf("%f",&a);

    printf("Enter the time that has elapsed:");
    scanf("%f",&t);

    v = u + (a * t);
    s = (u * t)+((a*t*t)/2);

    printf("The final velocity is %.2f\n",v);
    printf("Distance traversed is %.2f\n",s);


    return 0;
}


