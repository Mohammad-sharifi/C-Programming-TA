/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int x;
    
    // input
    printf("meghdare x ra vared konid: ");
    scanf("%d", &x);
    
    // output
    (x < 10 && x > -10) ? printf("Valid") : printf("%d", x);
    
    
    return 0;
}
