/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // 0110 --> n*2^0 + n*2^1 + n*2^2 + n*2^3 = 6
    // mabnaye 2 --> mabnaye 10 --> mabnaye 8
    
    int num_2_base, num_8_base = 0, num_10_base = 0;
    int rem, zarib = 1;
    
    
    // input
    printf("adade morede nazar ra vared konid: ");
    scanf("%d", &num_2_base);
    
    // base 10 calculation
    while (num_2_base) {
        rem = num_2_base%10;
        num_2_base /= 10;
        num_10_base += zarib*rem;
        zarib *= 2;
    }
    
    printf("base 10 : %d\n", num_10_base);
    
    // int temp = num_10_base;
    
    // 27 --> 27%8 = 3 --> 27/8 = 3 | 3%8 = 3 --> 3/8 = 0;  
    
    // (33)in base of 8 = 3*8^0 + 3*8^1
    // 3*1 + 10*3 = 30 + 3 = 33
    
    // 12 --> 12%8 = 4 --> 12/8 = 1 | 1%8 = 1 --> 1/8 = 0;
    // (14) in base of 8 = 4*8^0 + 1*8^1
    // 4*1 + 1*10 = 10 + 4 = 14
    
    // base 8 calculation
    zarib = 1;
    while (num_10_base) {
        rem = num_10_base%8;
        num_10_base /= 8;
        num_8_base += zarib*rem;
        zarib *= 10;
        
    }
    
    printf("base 8 : %d", num_8_base);
    // printf("\nbase 10 : %d \t base 8 : %d", temp, num_8_base);
    
    return 0;
}
