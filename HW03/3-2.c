/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rem, num, reverse_num = 0, temp;
    printf("enter a number: ");
    scanf("%d", &num);
    
    // for any digit number
    // assigning num value to a temporary variable
    temp = num;
    

    // calculation of numbers
    int digit = 1; 
    while (temp) {
        digit *= 10;
        temp /= 10;
    }
    
    // 5162 = 5*1000 + 1*100 + 6*10 + 2*1
    // 2615 = 2*1000 + 6*100 + 1*10 + 5*1


    // reversing stage
    while (num) {
        digit /= 10;
        rem = num % 10; 
        num /= 10;
        reverse_num += rem*digit;
        
    }
    
    printf("reverse form is : %d", reverse_num);
    
    return 0;
}
