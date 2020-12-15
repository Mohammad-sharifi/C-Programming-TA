/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num_2_base, num_8_base = 0, num_10_base = 0;
    int yekan, zarib = 1;
    int rem;
    
    
    // input
    printf("adade morede nazar ra vared konid: ");
    scanf("%d", &num_2_base);
    
    // base 10 calculation
    while (num_2_base) {
        yekan = num_2_base%10;
        num_2_base /= 10;
        num_10_base = num_10_base + yekan*zarib;
        zarib *= 2;
    }
    
    printf("base 10 : %d", num_10_base);
    
    // base 8 calculation
    zarib = 1;
    while (num_10_base) {
        rem = num_10_base%8;
        num_10_base /= 8;
        num_8_base = num_8_base + zarib*rem;
        zarib *= 10;
        
    }
    
    printf("base 8 : %d", num_8_base);
    
    return 0;
}
