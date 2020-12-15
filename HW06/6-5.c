/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


// 
void pretty_print(char arr[], int num_of_chars) {
    printf("[ ");
    for (int i = 0; i < num_of_chars; i++) {
        if (i == num_of_chars-1) printf("%c ", arr[i]);
        else printf("%c, ", arr[i]);
    }
    printf("]\n");
}


// function to sort an array
void sort_array(char arr[], int arr_size) {
    
    // bubble sort implementation
    int temp;
    int while_watchdog = arr_size; // this variable is defined to stop infinity loop
    int j;
    while (while_watchdog != 1) {
        while_watchdog = arr_size;
        for (j = 1; j < arr_size; j++) {
            if (arr[j-1] > arr[j]) {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            } else {
                while_watchdog -= 1;
            }
        }
    }
    
}


// count duplicates in an array
int count_duplicates(char arr[], int num_of_chars) {
    int duplicate_num = 0;
    
    for (int i = 1; i < num_of_chars; i++) {
        if (arr[i-1] == arr[i]) {
            duplicate_num++;
        }
    }
    
    return num_of_chars - duplicate_num;
}


int main()
{
    int num = 20;
    char arr[num];
    char sorted_arr[num];
    
    
    // input
    // test subject --> zxcabaadaogbhfkvazkw
    for (int i = 0; i < num; i++) {
        scanf(" %c", &arr[i]);
        sorted_arr[i] = arr[i];
    }
    
    // sort using sort_array function
    sort_array(sorted_arr, num);
    
    // output for the given array
    printf("user array \n");
    pretty_print(arr, num);
    
    // output for the sorted array
    printf("\nsorted array \n");
    pretty_print(sorted_arr, num);
    
    
    // counting duplicates using count_duplicates function
    char fresh_arr[count_duplicates(sorted_arr, num)];
    
    
    // new array implementation
    int counter = 0;
    for (int k = 0; k < num; k++) {
        if (sorted_arr[k] != sorted_arr[k+1]) {
            fresh_arr[counter] = sorted_arr[k];
            counter++;
        }
    }
    
     
    // output for the array without any duplicates
    printf("\narray without duplicates\n");
    pretty_print(fresh_arr, counter);
    

    return 0;
}
