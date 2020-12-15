/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define pi 3.14

int main()
{
    float mohit, r, masahat;
    printf("mohite dayere ra vared konid: ");
    scanf("%f", &mohit);
    
    r = mohit/(2*pi);
    masahat = pi*r*r;
    printf("r = %f, masahat = %f", r, masahat);
    return 0;
}
