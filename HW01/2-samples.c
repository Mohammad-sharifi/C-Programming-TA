/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int type1 = 2 <= 0 + 26%3 && 3/8; // showing that math operators have priorities over bitwise operators
    int type2 = 2 <= 0 + 26%3 && 1; // showing that math operators have priorities over bitwise operators
    int type3 = 2 < 0 + 5 && 1; // showing that math operators have priorities over bitwise operators
    int type4 = 2 < 0 + 5 && 3/8; // showing that math operators have priorities over bitwise operators
    int type5 = 2 < 4 || -2 <= -1*8 && (!0||1);
    int type6 = 2 > 4 || -2 <= -1*8 && (!0||1);
    
    printf("2 <= 0 + 26%3 && 3/8 logic is : %d\n", type1);
    printf("2 <= 0 + 26%3 && 1 logic is : %d\n", type2);
    printf("2 < 0 + 5 && 3/8 logic is : %d\n", type3);
    printf("2 < 0 + 5 && 3/8 logic is : %d\n", type4);
    printf("2 < 4 || -2 <= -1*8 && (!0||1) logic is : %d\n", type5);
    printf("2 > 4 || -2 <= -1*8 && (!0||1) logic is : %d\n", type6);
    
    
    return 0;
}
