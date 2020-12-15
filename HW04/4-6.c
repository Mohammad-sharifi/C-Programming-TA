#include <stdio.h>

int main()
{
    int n;
    
    // input
    printf("tedad e jomalat ra vared konid: ");
    scanf("%d", &n);
    
    // super-fibonacci series
    int f1 = 1, f2 = 1, f3 = 1;
    
    // considering less than 3 input
    if (n == 1) printf("super-fibonacci : 1");
    else if (n == 2) printf("super-fibonacci : 1,1");
    else if (n == 3) printf("super-fibonacci : 1,1,1");
    else printf("super-fibonacci : 1,1,1,");
    
    // // balancing the n variable
    // n -= 3;
    
    int tmp_f3;
    
    for (int k = 3; k < n; k++) {
        tmp_f3 = f3;
        f3 = f3 + f2 + f1;
        f1 = f2;
        f2 = tmp_f3;
        k+1 != n ? printf("%d,", f3) : printf("%d", f3);
        
    }
    
    return 0;
}
