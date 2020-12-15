/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// recursive fibbonacci

int fib(int n) {
    // printf("this is actually happening --> n = %d\n", n);
    // printf("--------------------\n");
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// n --> 4 | fib(2) + fib(3)
// fib(2) --> fib(0) + fib(1) | mean while the value for fib(0) and fib(1) is 1! |==> f(2) = 2
// fib(3) --> fib(1) + fib(2) | also we have the value of fib(2) which is 2 and the value of fib(3) = 1 + 2 = 3
// then for n --> 4 ==> fib(4) = fib(2) + fib(3) = 2 + 3 = 5


int main()
{
    int num;
    
    // input
    printf("lotfan tedad jomle morede nazar ra vared konid: ");
    scanf("%d", &num);
    
    // output using for loop
    for (int j = 1; j <= num; j++) {
        if (j != num) printf("%d,", fib(j));
        else printf("%d\n------------------\n", fib(j));
    }
    
    // output
    printf("fib(%d) = %d", num, fib(num));

    return 0;
}
