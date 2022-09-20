#include<stdio.h>

int main(void){

    //2.3 a)Define the variables c, thisVariable, q76354 and number to be of type int.
    int c ,thisVariable , q76354 , number; 

    /*2.3 b) Prompt the user to enter an integer. End your prompting message with a colon (:) 
    followed by a space and leave the cursor positioned after the space.*/
    printf("Enter an integer: ");

    //2.3 c) Read an integer from the keyboard and store the value entered in integer variable a.
    int a;
    scanf("%d",&a);

    //2.3d) If number is not equal to 7, print "The variable number is not equal to 7."
    if (number != 7)
    {
        printf("The variable number is not equal to 7.\n");
    }
    
    //2.3 e) Print the message "This is a C program." on one line.
    printf("This is a C program.\n");

    //f) Print the message "This is a C program." on two lines so that the first line ends with C.
    printf("This is a C\n program.\n");


    return 0;
}