/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    // -1 <= cos, sin <= 1
    double x, y, z;
    
    scanf("%lf %lf", &x, &y);
    
    z = (asin(x)+acos(y))*sqrt(pow(x, 5) + pow(y, 6));
    
    printf("z = %lf ", z);
    
    return 0;
}
