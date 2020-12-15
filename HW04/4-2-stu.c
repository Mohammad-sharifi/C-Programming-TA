/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n, r;
    
    // input
    do {
        printf("enter n, r ");
        scanf("%d %d", &n, &r);
    } while (n < r);
    
    // for n-r value
    int nr = n - r;
    
    // define variables for factorial calculation
    long int factn = 1, factr = 1, factnr = 1; 
    
    // calculating n factorial
    while (n) {
        factn *= n;
        n--;
    }
    
    // calculating r factorial
    while (r) {
        factr *= r;
        r--;
    }
    
    // calculating n-r factorial
    while (nr) {
        factnr *= nr;
        nr--;
    }
    
    
    // output
    printf("answer is %f", (double)(factn)/(double)(factr*factnr));
    
    
    return 0;
}
