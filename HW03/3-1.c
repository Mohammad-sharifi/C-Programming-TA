/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int max = 0, num;
    int limit = 0;
    while(limit < 10) {
        printf("enter a number: ");
        scanf("%d", &num);

        // determine max
        if (max < num) {
            max = num;
        }

        limit ++;
    }
    // using for loop
    // int i;
    // for (i = 0; i < 10; i++) {
    //     printf("enter a number: ");
    //     scanf("%d", &num);
    //     if (max < num) {
    //         max = num;
    //     }
    // }
    

    //output
    printf("max number is %d", max);

    return 0;
}
