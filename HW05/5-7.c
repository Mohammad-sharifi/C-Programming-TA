/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int isLower(char ch) {
    if (ch >= 'a' && ch <= 'z') return 1;
    else return 0;
}


int main() {
    
    char ch;
    
    // input
    printf("enter a character: ");
    scanf("%c", &ch);
    
    // output
    isLower(ch) ? printf("%c is a lower case letter", ch) : printf("%c is not a lower case letter!", ch); 
    
    return 0;
}
