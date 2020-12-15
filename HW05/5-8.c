/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int mytoupper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    } else {
        return ch;
    }
}

int main() {
    
    char ch;
    
    // input
    printf("enter a character: ");
    scanf("%c", &ch);
    
    // output
    printf("uppercase of %c is %c", ch, mytoupper(ch));
    
    return 0;
}
