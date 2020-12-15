/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, counter = 0, min = 9;
    
    printf("enter a number: ");
    scanf("%d", &num);
    
    // extracting the minimum digit of input number
    while (num) {
        if (min > (num%10)) {
            min = num%10;
        }
        num /= 10;
    }
    
    printf("minimum digit between digits is %d", min);
    
    return 0;
}
