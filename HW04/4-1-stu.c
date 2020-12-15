/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n;
    
    // input
    printf("enter number of rows: ");
    scanf("%d", &n);
    
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    
    for (int i = 1; i <= n; i++) {
        
        // for (int k = 1; k <= n - i; k++) {
        //     printf(" ");
        // } 
        
        for (int k = n - i; k > 0; k--) {
            printf(" ");
        } 
        
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
