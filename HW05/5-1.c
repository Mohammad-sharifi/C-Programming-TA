/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    
    int digit = 0, lower = 0, upper = 0;
    
    for (int i = 0; i < 100; i++) {
        printf("enter a character: ");
        scanf(" %c", &ch);
        if (isdigit(ch)) digit++;
        else if (isupper(ch)) upper++;
        else if (islower(ch)) lower++;
    }
    
    printf("lower = %d\nupper = %d\ndigit = %d\n", lower, upper, digit);
    
    
    return 0;
}
