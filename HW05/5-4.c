/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    
    // input
    printf("meghdare x, y ra vared konid: ");
    scanf("%d %d", &x, &y);
    
    // logx - y based = log10(x) / log10(y)
    printf("logy(x) = %lf\n", log10(x)/log10(y));
    
    return 0;
}
