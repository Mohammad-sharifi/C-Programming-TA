/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void print_equation(int arr[], int num_of_chars) {
    for (int i = 0; i < num_of_chars; i++) {
        if (arr[i] == 0) {
            printf("+ 0 ");
        }
        else if (i == num_of_chars-1) {
            if (arr[i] < 0) {
                printf("%d ", arr[i]);
            } else {
                printf("+ %d ", arr[i]);
            }
        }
        else if (i == 0) {
            if (arr[i] < 0) {
                printf("-%dx^%d ", -1*arr[i], num_of_chars-i-1);
            } else {
                printf("%dx^%d ", arr[i], num_of_chars-i-1);
            }
        }
        else {
            if (arr[i] < 0) {
                printf("- %dx^%d ", -1*arr[i], num_of_chars-i-1);
            } else {
                printf("+ %dx^%d ", arr[i], num_of_chars-i-1);
            }
        }
    }
    printf("\n");
}


int main()
{
    int m, n;
    
    // input
    do {
        printf("meghdare m , n ra vared konid: ");
        scanf("%d %d", &m, &n);
    } while (n > 10 || m > 10);
    
    
    // instanciating the arrays based on input sizes
    int first_equation[m];
    int second_equation[n];
    
    
    // input for the first equation
    for (int i = 0; i < m; i++) {
        scanf("%d", &first_equation[i]);
    }
    
    // input for the second equation
    for (int j = 0; j < n; j++) {
        scanf("%d", &second_equation[j]);
    }
    
    printf("----- first equation -----\n");
    print_equation(first_equation, m);
    printf("----- second equation -----\n");
    print_equation(second_equation, n);
    
    // instanciating the final array and initializing it with zeros
    int final_equation[m+n-1];
    for (int i = 0; i < m+n-1; i++) final_equation[i] = 0;
    
    // solve
    for (int k = 0; k < n; k++) {
        for (int h = 0; h < m; h++) {
            final_equation[h+k] += first_equation[h]*second_equation[k];
        }
    }
    
    
    // print final equation
    printf("----- final equation -----\n");
    print_equation(final_equation, m+n-1);
    

    return 0;
}
