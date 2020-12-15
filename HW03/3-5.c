/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c character's ascii code is %d\n", ch, ch);
    }
    
    return 0;
}
