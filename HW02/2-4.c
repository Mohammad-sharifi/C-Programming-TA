/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int x, y;
    printf("meghdare x , y ra vared konid: ");
    scanf("%d %d", &x, &y);
    
    x > y ? printf("x is max!") : printf("y is max!");
    return 0;
}
