/*
b) Write a program that estimates the value of the mathematical constant e by using the formula:
*/

#include <stdio.h>
#include<assert.h>
#include<math.h>

void test_factorial();
int factorial( int x);
long double calculate_e(int x);

int main()
{
    
    printf("%.20Lf",calculate_e(1000));
    return 0;
}

void test_factorial()
{
    
    unsigned int num = 5;
    assert (factorial(num) == 120);

    num = 0;
    assert (factorial(num) == 1);

    num = 3;
    assert (factorial(num) == 6);

}

int factorial( int number)
{
    int fac = 1;

    for (int i = number; i != 0 ; i--)
    {
        fac *= i;
    }
    

    return fac;
}

long double calculate_e(int x)
{
    long double e = 1.0 , temp;
    
    for (int i = 1; i <= x; i++)
    {
        temp = e;
        e = e + (1.0 / factorial(i));
        if(isinf(e)){
            return temp;
        }
        
    }
    
    return e;
}