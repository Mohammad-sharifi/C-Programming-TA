/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int counter = 0, num;
    
    // taking user input
    printf("enter a number: ");
    scanf("%d", &num);
    
    // calculation of length
    while (num) {
        counter++;
        num /= 10;
    }
    
    printf("this number has %d digits", counter);
    
    return 0;
}
