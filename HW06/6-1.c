/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void pretty_print(char arr[], int num_of_chars) {
    printf("[ ");
    for (int i = 0; i < num_of_chars; i++) {
        if (i == num_of_chars-1) printf("%c ", arr[i]);
        else printf("%c, ", arr[i]);
    }
    printf("]\n");
}

int main()
{
    int num = 20;
    char arr[num];
    char sorted_arr[num];
    
    // input
    for (int i = 0; i < num; i++) {
        scanf(" %c", &arr[i]);
        sorted_arr[i] = arr[i];
    }
    

    // bubble sort implementation
    int temp;
    int while_watchdog; // this variable is defined to stop inner loops incidents
    int j;
    while (while_watchdog != 1) {
        while_watchdog = num;
        for (j = 1; j < num; j++) {
            if (sorted_arr[j-1] > sorted_arr[j]) {
                temp = sorted_arr[j-1];
                sorted_arr[j-1] = sorted_arr[j];
                sorted_arr[j] = temp;
                while_watchdog += 1;
            } else {
                while_watchdog -= 1;
            }
        }
    }
    
    // test subject --> zxcabmfdiogbhfkvazkw
    
    // output for the given array
    pretty_print(arr, num);
    
    // output for the sorted array
    pretty_print(sorted_arr, num);
     

    return 0;
}
