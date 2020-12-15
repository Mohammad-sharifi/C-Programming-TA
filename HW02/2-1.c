/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float x, y, z, f;
    printf("lotfan maghadire x, y, z ra vared konid: ");
    scanf("%f %f %f", &x, &y, &z);
    
    f = (x*x + 1/y) / (5*x*y*z) - 5*x + 6*(y/z);
    printf("f(x,y,z)=%f", f);
    return 0;
}
