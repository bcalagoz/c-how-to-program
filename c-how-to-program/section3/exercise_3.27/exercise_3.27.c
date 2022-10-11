/*
3.27 (Validating User Input) Modify the program in Figure 3.10 to validate its inputs. 
On any input, if the value entered is other than 1 or 2, 
keep looping until the user enters a correct value.
*/
#include<stdio.h>

int main(){

    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while ( student <= 10 ) {
        
        printf( "%s", "Enter result ( 1=pass,2=fail ): " );
        scanf( "%d", &result );
        
        if ( result == 1)
        {
            passes = passes +1;
            student++;
        }
        else if ( result == 2 )
        {
            failures = failures +1;
            student++;
        }
        else
        {
            printf( "Unvalid Result!\n" );
        }
    }

    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );    

    if ( passes > 8 )
    {
        puts( "Bonus to instructor!" );
    }
    
    return 0;
}