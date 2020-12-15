/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define pi 3.14

int main()
{
    float x, R;
    
    // input
    printf("meghdare daraje ra vared konid: ");
    scanf("%f", &x);
    
    // calculating the radian form of the input degree
    R = (pi*x) /(float)180;

    // output
    printf("%.3f degree = %.3f radian\n", x, R);
    
    // input for taylor expand 
    int n, sine_counter = 1, cosine_counter = 0;
    printf("meghdare bast ta chand jomle hesab shavad? ");
    scanf("%d", &n);
    
    
    // yek for baraye mohasebe ye tavan
    // yek for baraye mohasebe ye factorial
    
    
    
    // calculating sine and cosine simultaneously
    float sine = 0, cosine = 0;
    for (int i = 0; i < n; i++) {
        
        // defining variables for factorial and power calculation purposes
        long int fact_num = 1;
        float temp_R = 1;
        
        // 1 | 1 - x^2/2! | 1 - x^2/2! + x^4/4! ... 
        
        // cosine coefficients are one step behind of sine coefficients
        for (int k = 1; k <= cosine_counter; k++) {
            temp_R *= R;
            fact_num *= k;
        }
        
        
        // checking the signs of accumulation
        if (i%2 == 1) {
            cosine -= (temp_R/(float)fact_num);
            
            // these steps are necessary because 
            // sine is one step ahead in factorial and power calculations
            
            // in 2nd stage --> sine_counter = 3 , cosine_counter = 2
            // 3! = 3*2*1 | fact_num = 2*1 
            
            fact_num *= sine_counter;
            temp_R *= R;
            sine -= (temp_R/(float)fact_num);
            
        } else {
            cosine += (temp_R/(float)fact_num);
            
            // these steps are necessary because 
            // sine is one step ahead in factorial and power calculations
            
            fact_num *= sine_counter;
            temp_R *= R;
            sine += (temp_R/(float)fact_num);
        }
        
        // 1 --> 3 --> 5 --> 7
        sine_counter += 2;
        // 0 --> 2 --> 4 --> 6
        cosine_counter += 2;
    }
    
    // output
    printf("sin(x) = %.2f \ncos(x) = %.2f \n", sine, cosine);
    
    return 0;
}
