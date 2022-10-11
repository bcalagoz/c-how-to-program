/*
a) Input unsigned integer variable x with scanf. Use the conversion specifier %u.
b) Input unsigned integer variable y with scanf. Use the conversion specifier %u.
c) Set unsigned integer variable i to 1.
d) Set unsigned integer variable power to 1.
e) Multiply unsigned integer variable power by x and assign the result to power.
f) Increment variable i by 1.
g) Test i to see if it’s less than or equal to y in the condition of a while statement.
h) Output unsigned integer variable power with printf. Use the conversion specifier %u.
*/

#include<stdio.h>

int main(){
    
    unsigned int x, y;

    printf("Enter X value:");
    scanf("%u",&x);

    printf("Enter Y value:");
    scanf("%u",&y);

    unsigned int i = 1;
    unsigned int power = 1;

    
    while (i <= y)
    {
        power = power * x;
        i++;   
    }
    
    printf("%u",power);      

    return 0;
}