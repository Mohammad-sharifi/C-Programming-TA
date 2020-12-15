/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// function to calculate factorial of a number
double custom_factorial (int n) {
    double factorial = 1;
    while (n) {
        factorial *= n;
        n--;
    }
    
    return factorial;
}


// function to calculate sine of a degree
double mysin (double degree) {
    int sine_counter = 1;
    double sine = 0, x = (degree*3.14/180);
    
    double power = x;
    
    for (int i = 0; i < 20; i++) {
        
        if (i%2 == 0) {
            sine += (power / custom_factorial(sine_counter));
        } else {
            sine -= (power / custom_factorial(sine_counter));
        }
        
        power *= (x*x);
        sine_counter += 2;
    }
    
    return sine;
}


int main()
{
    double degree;
    
    //input
    printf("degree : ");
    scanf("%lf", &degree);
    
    // output
    printf("sin(%.1lf) = %.3lf", degree, mysin(degree));
    
    return 0;
}
