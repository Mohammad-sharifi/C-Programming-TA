/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// custom power function
float power_of_2(int recurse) {
    float k = 1;
    for (int i = 0; i < recurse; i++) {
        k *= 2;
    }
    return k;
}


// recursive custom function

float a(int n) {
    if (n == 0) {
        return 2;
    }
    
    return a(n-1) + power_of_2(n);
}


int main()
{
    
    float answer = a(3);
    
    printf("answer ---> %f", answer);
    return 0;
}
