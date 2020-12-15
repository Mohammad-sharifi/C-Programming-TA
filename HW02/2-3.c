/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int x, y, z, k, h;
    float avg;
    printf("5 addade sahih ra vared konid: ");
    scanf("%d %d %d %d %d", &x, &y, &z, &k, &h);
    
    avg = (x+y+z+k+h) / 5;
    printf("avg = %f", avg);
    return 0;
}
