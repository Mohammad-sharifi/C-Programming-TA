/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double f = 0;
    int counter = 1, num, x;
    
    // input
    printf("n, x ra vared konid: ");
    scanf("%d %d", &num, &x);
    
    while (counter <= num) {
        f += counter*pow(x, counter);
        counter++;
    }
    
    // output
    printf("%lf", f);
    
    return 0;
}
