#include <stdio.h>

void remove_duplicates(char str[], char new_str[], int array_size, int start, int counter) {
    if (array_size >= 2 && start < array_size) {
        if (str[start] != str[start+1]) {
            new_str[counter] = str[start];
            counter++;
        }
        
        remove_duplicates(str, new_str, array_size, start+1, counter);
    } 
}

void remove_duplicates_solo(char str[], int array_size, int start) {
    if (array_size >= 2 && start < array_size) {
        if (str[start] == str[start+1]) {
            // we cannot replace it with "" in C, therefore we need to remove it!
            int i = start+1;
            while (i < array_size) {
                str[i] = str[i+1];
                i++;
            }
            array_size--;
            str[i] = '\0';
            
            // we need to make sure that start is 0 or more than that!
            if (start != 0) {
                remove_duplicates_solo(str, array_size, start-1);
            } else {
                remove_duplicates_solo(str, array_size, start+1);
            }
            
        } else {
            remove_duplicates_solo(str, array_size, start+1);
        }
    } 
}

// test subject --> zybaabaczmmznctaldht

void bubble_sort(char str[], int array_size) {
    char temp;
    for (int i = 1; i < array_size; i++) {
        if (str[i-1] > str[i]) {
            temp = str[i-1];
            str[i-1] = str[i];
            str[i] = temp;
        }
    }
    
    if (array_size > 0) {
        bubble_sort(str, array_size-1);
    }
}


int main() {
    
    char str[20];
    
    scanf("%s", str);
    
    bubble_sort(str, sizeof(str));
    
    printf("%s\n", str);
    
    // removing duplicates using a new array 
    // char new_str[sizeof(str)] = {'\0'};
    
    // remove_duplicates(str, new_str, sizeof(new_str), 0, 0);
    
    // printf("%s\n", new_str);
    
    
    // removing duplicates on the array itself!
    remove_duplicates_solo(str, sizeof(str), 0);
    
    printf("%s", str);
    
    return 0;
}