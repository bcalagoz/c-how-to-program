#include<stdio.h>

int main(){

    unsigned int sum, x;

    sum = 0;
    x = 1;

    while (x <= 10)
    {
        sum += x ;
        x++;
    }
    
    printf("The sum is : %u \n",sum);

    return 0;
}